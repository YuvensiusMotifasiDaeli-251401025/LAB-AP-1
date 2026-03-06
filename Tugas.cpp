#include <iostream> 
using namespace std;

int main()
{
    // deklarasi variabel
    string nama;          // menyimpan nama karyawan
    int gol, anak;        // gol = golongan karyawan, anak = jumlah anak
    int gaji_pokok;       // menyimpan gaji pokok sesuai golongan
    int tunjangan;        // menyimpan tunjangan anak
    float pajak;          // menyimpan pajak 5%
    int total;            // menyimpan total gaji yang diterima

    // meminta user memasukkan nama
    cout << "Masukkan Nama Anda : ";
    cin >> nama;

    // meminta user memasukkan golongan
    cout << "Masukkan Golongan (1/2/3) : ";
    cin >> gol;

    // pengecekan jika golongan tidak valid
    if (gol != 1 && gol != 2 && gol != 3)
    {
        cout << "Golongan salah";
        return 0; // keluar dari program jika golongan salah
    }
    // meminta user memasukkan jumlah anak
    cout << "Jumlah anak : ";
    cin >> anak;

    // menentukan gaji pokok berdasarkan golongan
    if (gol == 1)
        gaji_pokok = 5000000; // jika golongan 1 maka gaji 5.000.000
    else if (gol == 2)
        gaji_pokok = 3000000; // jika golongan 2 maka gaji 3.000.000
    else 
        gaji_pokok = 2500000; // jika golongan 3 maka gaji 2.500.000

    // menghitung pajak sebesar 5% dari gaji pokok
    pajak = gaji_pokok * 0.05;

    // menentukan tunjangan anak
    if (anak == 1 || anak == 2)
        tunjangan = 500000 * anak; // jika anak 1 atau 2 maka 500 ribu per anak
    else if (anak > 2)
        tunjangan = 750000; // jika anak lebih dari 2 maka tunjangan 750 ribu
    else
        tunjangan = 0; // jika tidak punya anak maka tidak ada tunjangan

    // menghitung total gaji yang diterima
    total = gaji_pokok - pajak + tunjangan;

    // menampilkan hasil perhitungan
    cout << "Total Gaji  : Rp." << total << ",-" << endl;
}