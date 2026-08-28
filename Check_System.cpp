#!/usr/bin/env bash

# File báo cáo đầu ra
OUTPUT_FILE="system_report.txt"

# Hàm in và ghi đồng thời vào file bằng lệnh tee
log_info() {
    echo -e "$1" | tee -a "$OUTPUT_FILE"
}

# Khởi tạo hoặc xóa trắng nội dung file báo cáo cũ
> "$OUTPUT_FILE"

log_info "======================================================"
log_info "            BAO CAO KIEM TRA HE THONG LINUX           "
log_info "           Thoi gian tao: $(date '+%Y-%m-%d %H:%M:%S')         "
log_info "======================================================"

# 1. Thong tin He dieu hanh & Phien ban Ubuntu
log_info "\n[1] THONG TIN HE DIEU HANH & PHIEN BAN UBUNTU:"
if [ -f /etc/os-release ]; then
    UBUNTU_DESC=$(grep "PRETTY_NAME" /etc/os-release | cut -d "=" -f 2 | tr -d '"')
    log_info "-> Phien ban: $UBUNTU_DESC"
else
    log_info "-> Phien ban: $(lsb_release -d 2>/dev/null | cut -f 2 || uname -o)"
fi

# 2. Thong tin Kernel
log_info "\n[2] THONG TIN KERNEL LINUX:"
log_info "-> Kernel Version : $(uname -r)"
log_info "-> Architecture   : $(uname -m)"

# 3. Kiem tra cac cong cu phat trien (GCC, G++, CMake, Git, Python)
log_info "\n[3] KIEM TRA CAC CONG CU PHAT TRIEN:"

# Kiem tra GCC
if command -v gcc &> /dev/null; then
    log_info "-> GCC    : Da cai dat ($(gcc -dumpfullversion -dumpversion 2>/dev/null || gcc -dumpversion))"
else
    log_info "-> GCC    : CHUA CAI DAT"
fi

# Kiem tra G++
if command -v g++ &> /dev/null; then
    log_info "-> G++    : Da cai dat ($(g++ -dumpfullversion -dumpversion 2>/dev/null || g++ -dumpversion))"
else
    log_info "-> G++    : CHUA CAI DAT"
fi

# Kiem tra CMake
if command -v cmake &> /dev/null; then
    CMAKE_VER=$(cmake --version | head -n 1 | awk '{print $3}')
    log_info "-> CMake  : Da cai dat ($CMAKE_VER)"
else
    log_info "-> CMake  : CHUA CAI DAT"
fi

# Kiem tra Git
if command -v git &> /dev/null; then
    GIT_VER=$(git --version | awk '{print $3}')
    log_info "-> Git    : Da cai dat ($GIT_VER)"
else
    log_info "-> Git    : CHUA CAI DAT"
fi

# Kiem tra Python
if command -v python3 &> /dev/null; then
    PY_VER=$(python3 --version | awk '{print $2}')
    log_info "-> Python : Da cai dat (Python $PY_VER)"
elif command -v python &> /dev/null; then
    PY_VER=$(python --version 2>&1 | awk '{print $2}')
    log_info "-> Python : Da cai dat (Python $PY_VER)"
else
    log_info "-> Python : CHUA CAI DAT"
fi

# 4. Kiem tra phan cung (CPU, RAM, O cung)
log_info "\n[4] KIEM TRA PHAN CUNG (CPU, RAM, O CUNG):"

# CPU
CPU_MODEL=$(grep -m 1 "model name" /proc/cpuinfo | cut -d ":" -f 2 | sed 's/^[ \t]*//')
CPU_CORES=$(nproc)
log_info "-> CPU Model    : $CPU_MODEL"
log_info "-> So Core CPU  : $CPU_CORES"

# RAM
log_info "\n--- Dung luong RAM & Swap (free -h) ---"
free -h | tee -a "$OUTPUT_FILE"

# Ổ cứng
log_info "\n--- Dung luong o cung (df -h -x tmpfs -x devtmpfs -x squashfs) ---"
df -h -x tmpfs -x devtmpfs -x squashfs | tee -a "$OUTPUT_FILE"

# 5. Kiem tra GPU NVIDIA
log_info "\n[5] KIEM TRA GPU NVIDIA:"
if command -v nvidia-smi &> /dev/null; then
    log_info "-> Trang thai: Tim thay NVIDIA Driver."
    log_info "--- Chi tiet GPU (nvidia-smi -L) ---"
    nvidia-smi -L | tee -a "$OUTPUT_FILE"
    
    DRIVER_VER=$(nvidia-smi --query-gpu=driver_version --format=csv,noheader | head -n 1)
    CUDA_VER=$(nvidia-smi | grep -i "CUDA Version" | awk '{print $9}')
    log_info "-> Driver Version: $DRIVER_VER"
    log_info "-> CUDA Version  : $CUDA_VER"
else
    # Kiem tra card qua PCI bus
    NVIDIA_PCI=$(lspci | grep -i nvidia)
    if [ -n "$NVIDIA_PCI" ]; then
        log_info "-> Phat hien phan cung NVIDIA tren bus PCI nhung chua cai Driver/nvidia-smi:"
        log_info "$NVIDIA_PCI"
    else
        log_info "-> Khong tim thay GPU NVIDIA hoac he thong khong su dung card NVIDIA."
    fi
fi

log_info "\n======================================================"
log_info "Da hoan tat kiem tra! Ket qua da duoc luu vao: $OUTPUT_FILE"
log_info "======================================================"