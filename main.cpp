// File: main.cpp
#include <iostream>
#include "math_utils.h" // Nạp bản thiết kế vào

int main() {
    // Trình biên dịch tin tưởng cho phép gọi vì đã thấy prototype trong math_utils.h
    double ketQua = tinhHieu(10.0, 4.0); 
    std::cout << "Ket qua: " << ketQua << std::endl;
    return 0;
}