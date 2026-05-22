#include <iostream>
#include "header.h"
using namespace std;

int main() {
    float celsius;

    cout << "Masukkan suhu Celsius: ";
    cin >> celsius;

    cout << "Fahrenheit : " << cf(celsius) << endl;
    cout << "Kelvin     : " << ck(celsius) << endl;
}