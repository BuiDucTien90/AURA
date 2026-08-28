#include <iostream>
#include <string>
using namespace std;


// - BAI 3: PHAM VI CUA BIEN (SCOPE OF VARIABLES)

// int globalThreshold = 100; // Bien toan cuc de luu nguong
// void checkScope () {
//     int localVar = 10;
//     cout << "Global:" << globalThreshold << ", Local:" << localVar << endl;
// }
// int main() {
//     int mainVar = 50; // Bien cuc bo trong ham main
//     cout << "Bien cuc bo trong ham main: " << mainVar << endl;

//     if (false) {
//         int blockVar = 5; // Chi ton tai trong khoi lenh if
//         cout << "Bien cuc bo trong khoi lenh if: " << blockVar << endl; 

//     }

//     checkScope(); // Goi ham checkScope de hien thi gia tri bien toan cuc va bien cuc bo trong ham checkScope   
//     return 0;
// }





// --------------BAI 4: EP KIEU DU LIEU-------------

// int main() {
//     // Ep kieu ngam dinh
//     int a = 10;
//     double b = a; // Ep kieu tu int sang double
//     cout << "Gia tri cua b: " << b << endl;

//     // Ep kieu tuong minh
//     int distance = 100;
//     int velocity = 60;

//     double time = (distance) / static_cast<double>(velocity); // Ep kieu tu int sang double
//     cout << "Thoi gian: " << time << " giay" << endl;
//     return 0;
// }


// --------------BAI 5: HANG SO (CONSTANTS)-------------
int main() {
    const double TTC_threshold = 2.5; // Bien hang so de luu nguong TTC
    const double lightSpeed = 299792458; // Bien hang so de luu van toc anh sang
    cout << "TTC Threshold: " << TTC_threshold << " giay" << endl;
    // TTC Threshold=2;
    cout << "Light Speed: " << lightSpeed << " m/s" << endl;
    return 0;
}