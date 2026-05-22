#include <iostream>
#include <vector>

using namespace std;


int hitungTotal(vector<int> nilai) {
    int total = 0;
    for (int i = 0; i < nilai.size(); i++) {
        total += nilai[i];
    }
    return total;
}

double hitungRataRata(vector<int> nilai) {
    int total = hitungTotal(nilai);
    return (double) total / nilai.size();
}

int cariNilaiTertinggi(vector<int> nilai) {
    int tertinggi = nilai[0];

    for (int i = 1; i < nilai.size(); i++) {
        if (nilai[i] > tertinggi) {
            tertinggi = nilai[i];
        }
    }

    return tertinggi;
}

int cariNilaiTerendah(vector<int> nilai) {
    int terendah = nilai[0];
    for (int i = 1; i < nilai.size(); i++) {
        if (nilai[i] < terendah) {
            terendah = nilai[i];
        }
    }
    return terendah;
}

int main() {
    int jumlah;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlah;

    vector<int> nilai(jumlah);

    for (int i = 0; i < jumlah; i++) {
        cout << "Masukkan nilai mahasiswa ke-" << i + 1 << ": ";
        cin >> nilai[i];
    }

    
    cout << "Total Nilai      : " << hitungTotal(nilai) << endl;
    cout << "Rata-rata Nilai  : " << hitungRataRata(nilai) << endl;
    cout << "Nilai Tertinggi  : " << cariNilaiTertinggi(nilai) << endl;
    cout << "Nilai Terendah   : " << cariNilaiTerendah(nilai) << endl;

}