#include <iostream>
#include <cmath>
using namespace std;

int const n = 8;
int a[n];
int b[n];

int main () {

    for (int i = 0; i < 8; i++) {
        cout << "Insira o valor " << i+1 << ": ";
        cin >> a[i];
    }

    cout << "\n\n";

    for (int i = 0; i < n; i++) {
        b[i] = a[i] * 3;
        cout << "Valor Array B: " << b[i] << endl;
    }

    cin.get();
    cin.get();

    return 0;
}
