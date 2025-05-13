#include <iostream>
using namespace std;

// Deklarasi class BangunDatar
class BangunDatar;

class PersegiPanjang {
public:
    void inputData(BangunDatar &bd);
    void outputData(BangunDatar &bd);
};

class BangunDatar {
private:
    float panjang;
    float lebar;
    float hitungLuas(){
        return panjang * lebar;
    };
    float hitungKeliling(){
        return 2 * (panjang + lebar);
    };
public:
    // Untuk mengakses panjang dan lebar
    friend void PersegiPanjang::inputData(BangunDatar &bd);
    // Untuk mengakses fungsi
    friend void PersegiPanjang::outputData(BangunDatar &bd);
};

// Definisi fungsi inputData dari class PersegiPanjang
void PersegiPanjang::inputData(BangunDatar &bd) {
    cout << "Masukkan Panjang : ";
    cin >> bd.panjang;
    cout << "Masukkan Lebar : ";
    cin >> bd.lebar;
}

// Definisi fungsi outputData dari class PersegiPanjang
void PersegiPanjang::outputData(BangunDatar &bd) {
    cout << "Luas     : " << bd.hitungLuas() << endl;
    cout << "Keliling : " << bd.hitungKeliling() << endl;
};

int main() {
    PersegiPanjang pP;
    BangunDatar bD;

    pP.inputData(bD);
    pP.outputData(bD);

};