#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    double volume, comprimento, largura, altura;

    cout << "Insira o comprimento: ";
    cin >> comprimento;
    
    cout << "Insira a largura: ";
    cin >> largura;

    cout << "Insira a altura: ";
    cin >> altura;

    volume = comprimento * largura * altura;

    cout << "\nVolume: " << volume << endl;

    cin.get();
    cin.get();
    return 0;
}

