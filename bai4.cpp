#include <iostream>
#include <string>
using namespace std;

// 1. VONG LAP IF-ELSE
// int main() {
//     double TTC = 1.5; // Thoi gian toi thieu de cham dut va cham

//     if (TTC <=0) {
//         cout << "TTC khong hop le" << endl;
//     } else if (TTC <=1.5){
//         cout << "MUC DO 1: PHANH KHAN CAP" << endl;
//     } else if (TTC <=3){
//         cout << "MUC DO 2: CANH BAO" << endl;
//     } else {
//         cout << "MUC DO 3: AN TOAN" << endl;
//     }
//     return 0;
// }

// ------------ 2. CAU TRUC LUA CHON SWITCH-CASE ----------

// int main(){
//     int mode; // Chon phong cach lai xe 1. Can than, 2. Binh thuong, 3. Nguy hiem
//     cout << "Chon gia tri mode (1-3): ";
//     cin >> mode;
//     switch (mode) {
//         case 1: 
//             cout << "Che do 1: LAI XE CAN THAN" << endl;
//             break;
//         case 2:
//             cout << "Che do 2: LAI XE BINH THUONG" << endl;
//             break;
//         case 3:
//             cout << "Che do 3: LAI XE NGUY HIEM" << endl;
//             break;
//         default:
//             cout << "Che do khong hop le" << endl;
//     }
//     return 0;
// }
    

// --------------3. CAU TRUC LAP FOR-------------
// int main() {
//     for (int step =1; step <=5; ++step) {
//         double distance = 50.0 - step * 5.0; // Khoang cach giam dan theo buoc
//         cout << "Buoc: " << step << ", Khoang cach: " << distance << " km" << endl;
//     }
//     return 0;
// }


// --------------4. CAU TRUC LAP WHILE-------------
// VONG LAP WHILE DUNG KHI CHUA BIET SO LAN LAP, LAP CHO DEN KHI THOA MAN DIEU KIEN
// int main(){
//     double velocity = 60.0; // van toc ban dau
//     while (velocity < 100){
//         velocity += 10; // tang van toc len 5 km/h moi lan lap
//         cout << "Van toc hien tai: " << velocity << " km/h" << endl;
//     }
//     cout << "Van toc da dat 100 km/h, dung lai!" << endl;
//     return 0;
// }

// --------------5. CAU TRUC LAP Break, continue-------------
int main(){
    double sensorData[] = {10, 22.5, 3.6, -1, 65, 100}; // Mang du lieu tu cam bien
    for (int i=0; i<6; ++i){
        double Distance = sensorData[i];
        if (Distance < 0) {
            cout << "Gia tri cam bien khong hop le, bo qua!" << endl;
            continue; //Bo qua gia tri khong hop le va tiep tuc vong lap
        }

        cout << "Gia tri khoang cach= " << Distance << " m" << endl;

        if (Distance <5){
            cout << "Canh bao: Khoang cach qua ngan" <<endl;
            break; // Thoat vong lap khi khoang cach qua ngan
        }
    // return 0;
    }
    return 0;

}