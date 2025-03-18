#include <iostream>
#include <cmath>
using namespace std;

int const n = 20;
int a[n];
int b[n];

int main() {
    for (int i = 0; i < n; i++) {
        cout << "Insira o valor (Array A) " << i+1 << ": ";
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        b[i] = a[n-1-i]; 

        cout << "Índice " << i << " | Valor: " << b[i] << endl;
    }

    cin.get();
    cin.get();

    return 0;
}
