#include <iostream>
#include <cmath>
using namespace std;

int const n = 20;
int a[n];
int b[n];
int c[n];

int main () {

    for (int i = 0; i < n; i++) {
        cout << "Insira o valor (Array A) " << i+1 << ": ";
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cout << "Insira o valor (Array B) " << i+1 << ": ";
        cin >> b[i];
    }

    cout << "\n";

    for (int i = 0; i < n; i++) {
        c[i] = a[i] - b[i];
        cout << "Valor Array C: " << c[i] << endl;
    }

    cin.get();
    cin.get();

    return 0;
}
