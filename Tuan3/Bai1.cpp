#include <iostream>
using namespace std;

// int main(){
//     int speed = 100;
//     int* ptr = &speed; // Khởi tạo con trỏ ptr trỏ đến biến speed
//     cout << "Gia tri cua speed: " << speed << endl; // In ra giá trị của biến speed
//     cout << "Dia chi cua speed: " << &speed << endl; // In ra địa chỉ của biến speed
//     cout << "Gia tri cua ptr: " << *ptr << endl; // In ra giá trị mà con trỏ ptr trỏ đến (giá trị của speed)
//     return 0;
// }


// 2. Cach dung int* pointer va int& reference

// int main() {
//     int x = 10;
//     int y = 20;

//     // 1. Pointer
//     int* ptr = &x; // ptr trỏ tới x
//     ptr = &y;      // Hợp lệ: ptr chuyển sang trỏ tới y

//     // 2. Reference
//     int& ref = x;  // ref là tên gọi khác của x
//     ref = y;       // LƯU Ý: Đây KHÔNG PHẢI chuyển ref sang y, mà là gán giá trị của y (20) vào x!
//     // int& ref2;  // LỖI: Reference bắt buộc phải khởi tạo ngay

//     return 0;
// }


// #include <iostream>
// #include <string>

// Nhận chuỗi qua const reference: Nhanh + Không sợ bị sửa đổi dữ liệu gốc
// void hienThiCanhBao(const std::string& vehicleID, const double& ttc) {
//     std::cout << "Xe " << vehicleID << " co nguy co va cham trong " << ttc << "s!\n";
    
//     // vehicleID += "_CRITICAL"; // LỖI BIÊN DỊCH: Không thể sửa biến có thuộc tính const
// }

// int main() {
//     std::string id = "Car_VinFast_VF8";
//     double ttc = 1.2;

//     hienThiCanhBao(id, ttc);
//     return 0;
// }

int main(){
    double distance [4] = {1, 3.4, 5.2, 7};
    distance[1]=50; //gan giá trị mới cho phần tử thứ 2 của mảng la 50
    cout << "Gia tri cua phan tu thu 2: " << distance[1] << endl; //in ra giá trị của phần tử thứ 2 của mảng
    for (int i = 0; i < 4; i++){
        cout << "Gia tri tu cam bien thu" << i+1 << ": " << distance[i] << endl; //in ra giá trị của các phần tử trong mảng
    }
    return 0;
}