#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;

    if (b != 0 && a % b == 0 && (a / b) > 2) {
        cout << "VALID" << endl;
    } else {
        cout << "TIDAK" << endl;
    }
}