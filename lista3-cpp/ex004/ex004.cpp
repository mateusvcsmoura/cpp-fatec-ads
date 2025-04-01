#include <iostream>
#include <cmath>
using namespace std;

int const n = 15;
int a[n];
int b[n];

int main () {
    for (int i = 0; i < n; i++) {
        cout << "Insira o valor (Array A) " << i+1 << ": ";
        cin >> a[i];
    }

    cout << "\n";

    for (int i = 0; i < n; i++) {
        b[i] = pow(a[i], 2);
        cout << "Valor Array B: " << b[i] << endl;
    }
    
    cin.get();
    cin.get();

    return 0;
}

