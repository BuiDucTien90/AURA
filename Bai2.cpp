#include <iostream>
#include <string>
using namespace std;

int main() {
    //1. Khai bao
    int count;

    //2. Khoi tao theo kieu gan
    double speed = 60.5;

    //3. Khoi tao truc tiep
    char grade = 'A';

    //4. Khoi tao danh sach chuan
    bool isWarning{ false };
    string systemName{"ADAS system"};

    // Nhap du lieu tu ban phim
    cout << "Enter count: ";
    cin >> count;   
    cout << "Enter speed: ";
    cin >> speed;

    // IN DU LIEU RA MAN HINH
    cout << "Count: " << count << endl;
    cout << "Speed: " << speed << " km/h" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is Warning: " << isWarning << endl;
    cout << "System Name: " << systemName << endl;

    return 0;

}
