#include <iostream>
using namespace std;

int hitungLuasPersegiPanjang(int panjang, int lebar) {
    return panjang * lebar;
}

float hitungVolumeBalok(float panjang, float lebar, float tinggi) {
    return panjang * lebar * tinggi;
}

int main() {
    int panjang_persegi, lebar_persegi;
    float panjang_balok, lebar_balok, tinggi_balok;

   
    cout << "Masukkan panjang persegi panjang: ";
    cin >> panjang_persegi;
    cout << "Masukkan lebar persegi panjang: ";
    cin >> lebar_persegi;

    cout << "Luas persegi panjang: " << hitungLuasPersegiPanjang(panjang_persegi, lebar_persegi) << endl;


    cout << "Masukkan panjang balok: ";
    cin >> panjang_balok;
    cout << "Masukkan lebar balok: ";
    cin >> lebar_balok;
    cout << "Masukkan tinggi balok: ";
    cin >> tinggi_balok;

 
    cout << "Volume balok: " << hitungVolumeBalok(panjang_balok, lebar_balok, tinggi_balok) << endl;

    return 0;
}
