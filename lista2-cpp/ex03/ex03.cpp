#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void readValues (double &real, double &exchangeRate);
double realToDollar (double real, double exchangeRate);

int main ()
{
    double realAmount, currentlyExchangeRate;

    readValues(realAmount, currentlyExchangeRate);

    double convertedValue = realToDollar(realAmount, currentlyExchangeRate);

    cout << fixed << setprecision(2); // Necessário para apenas duas casas decimais nas variáveis
    cout << "\nR$" << realAmount << " is U$D " << convertedValue << endl;

    cin.get();
    cin.get();
    return 0;
}

void readValues(double &real, double &exchangeRate)
{
    cout << "Enter Real amount: R$ ";
    cin >> real;

    cout << "Enter Exchange Rate to Dollar: ";
    cin >> exchangeRate;

    return;
}

double realToDollar (double real, double exchangeRate)
{
    return real / exchangeRate;
}

