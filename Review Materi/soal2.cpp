#include <iostream>
using namespace std;

int main(){
    int n;
    
    cout << "Masukkan jumlah N: ";
    cin >> n;

    int nilai[n];

    for(int i = 1; i < n; i++){
        cout << "Masukkan Nilai: ";
        cin >> nilai[i];
    }

    for(int i = n; i > 0; i--){
        cout << nilai[i] <<" ";
    }
}