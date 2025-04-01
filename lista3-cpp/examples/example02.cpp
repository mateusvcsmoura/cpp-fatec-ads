#include <iostream>
#include <cmath>
using namespace std;

int const n = 3;
double salario[n];
int idade[n];

int main () {

    double x;

    for (int i = 0; i < n; i++) {
        cout << "Digite o Salário: " << endl;
        cin >> salario[i];

        cout << "Digite a Idade: " << endl;
        cin >> idade[i];
    }

    for (int i = 0; i < n; i++) {
        x = salario[i] * 1.1;
        cout << "\nValores\n\nSalário: R$" << x << " | Idade: " << idade[i] << endl;
    }

    cin.get();
    cin.get();
    return 0;
}

