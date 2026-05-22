#include <iostream>
using namespace std;

void tukar (int *c, int *d){
    int temp;
    temp = *c;
    *c = *d;
    *d = temp;
}

int main(){
    int a = 10, b = 20;

    cout << "Nilai awal a: "<< a << endl;
    cout << "NIlai awal b: "<< b << endl;

    tukar(&a, &b);
    cout << "Nilai a setelah di tukar: "<< a << endl;
    cout << "Nilai b setelah di tukar: "<< b << endl;
}