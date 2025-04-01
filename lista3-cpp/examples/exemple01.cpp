#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int x [] = {1, 0, -1, 5, 9, 10, 11, 12, 213, 400};
    int n = sizeof(x) / sizeof(int); // Tamanho do Array

    int aux = 0;

    for (int i = 0; i < n; i++) {
        aux = pow(x[i], 2) + x[i];
        cout << aux << endl;
    }

    cin.get();

    return 0;
}

