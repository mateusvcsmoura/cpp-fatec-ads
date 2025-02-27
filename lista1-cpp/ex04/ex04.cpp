#include <iostream>
#include <cmath>
using namespace std;

int main () 
{
    double prestacao, valor, taxa, tempo;

    cout << "Insira o valor: ";
    cin >> valor;

    cout << "Insira a taxa: ";
    cin >> taxa;

    cout << "Insira o tempo: ";
    cin >> tempo;

    prestacao = valor + (valor * (taxa / 100) * tempo);

    cout << "\nPrestacao: R$" << prestacao << endl;

    cin.get();
    cin.get();
    return 0;
}
