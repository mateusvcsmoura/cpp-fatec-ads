#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    double celsius, fahrenheit;

    cout << "Enter the temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (9 * celsius + 160) / 5;
    cout << "The temperature in Fahrenheit is: " << fahrenheit << endl;

    cin.get();
    cin.get();
    return 0;
}
