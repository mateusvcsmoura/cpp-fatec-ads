#include <iostream>
#include <cmath>
using namespace std;

void readValues (int &n1, int &n2, int &n3);
int squareSum (int n1, int n2, int n3);

int main ()
{
    int num1, num2, num3;
    readValues(num1, num2, num3);

    int result = squareSum(num1, num2, num3);

    cout << "\nSoma dos Quadrados: " << result << endl;

    cin.get();
    cin.get();
    return 0;
}

void readValues (int &n1, int &n2, int &n3) 
{
    cout << "Enter value 1: ";
    cin >> n1;
    cout << "Enter value 2: ";
    cin >> n2;
    cout << "Enter value 3: ";
    cin >> n3;

    return;
}

int squareSum (int n1, int n2, int n3)
{
    return (pow(n1, 2) + pow(n2, 2) + pow(n3, 2));
}
