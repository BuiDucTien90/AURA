#include<iostream>
using namespace std;

void HamGiamToc (double speed){
    if (speed >10){
        for (int i=0; i<5; ++i){
            speed= speed -10; // Giam toc 10km/h
            cout << "Van toc trong ham HamGiamToc: " << speed << " km/h" << endl;

        }

    }

}

int main() {
    double CurrentSpeed = 100;// Van toc hien tai
    cout << "Van toc hien tai truoc khi goi ham: " << CurrentSpeed << " km/h" << endl;
    HamGiamToc(CurrentSpeed); // Goi ham
    cout << "Van toc hien tai sau khi goi ham: " << CurrentSpeed << " km/h" << endl; // Van toc hien tai khong thay doi
    return 0;
}