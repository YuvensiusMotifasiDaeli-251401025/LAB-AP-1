#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    int nilai;
};

int main() {
    Mahasiswa mhs;

    cout << "Masukkan Nama : ";
    cin >> mhs.nama;

    cout << "Masukkan NIM  : ";
    cin >> mhs.nim;
    
    cout << "Masukkan Nilai : ";
    cin >> mhs.nilai;
    
    cout << endl;
    cout << "Nama  : " << mhs.nama << endl;
    cout << "NIM   : " << mhs.nim << endl;
    cout << "Nilai   : " << mhs.nilai << endl;
}