#include <iostream>
#include <cmath>
using namespace std;

int const n = 20;
int const m = 30;
int const o = 50;
int a[n];
int b[m];
int c[o];

int main () {
    for (int i = 0; i < n; i++) {
        cout << "Insira o valor (Array A) " << i+1 << ": ";
        cin >> a[i];
    }

    for (int i = 0; i < m; i++) {
        cout << "Insira o valor (Array B) " << i+1 << ": ";
        cin >> b[i];
    }

    // Escrevendo valores Matriz A
    for (int i = 0; i < n; ++i) {
        c[i] = a[i];
    }

    // Escrevendo valores Matriz B
    for (int i = 0; i < m; ++i) {
        c[n + i] = b[i];
    }

    for (int i = 0; i < o; i++) {
        cout << "Matriz C | Elemento " << i << " | Valor: " << c[i] << endl;
    }

    cin.get();
    cin.get();

    return 0;
}

