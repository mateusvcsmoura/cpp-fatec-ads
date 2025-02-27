#include <iostream>
#include <cmath>
using namespace std;

void calcularVolume (double comprimento, double largura, double altura);

int main ()
{
    double comprimento, largura, altura;

    cout << "Insira o comprimento: ";
    cin >> comprimento;

    cout << "Insira a largura: ";
    cin >> largura;

    cout << "Insira a altura: ";
    cin >> altura;

    calcularVolume(comprimento, largura, altura);

    cin.get();
    cin.get();
    return 0;
}

void calcularVolume (double comprimento, double largura, double altura)
{
    double volume = comprimento * largura * altura;
    cout << "\nVolume: " << volume << endl;

    return;
}
