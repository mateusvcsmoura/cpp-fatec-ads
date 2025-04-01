#include <iostream>
#include <cmath>
using namespace std;

int main () {

    int x [] = {1, 0, -1, 5, 9, 10, 11, 12, 213, 400};
    int n = sizeof(x) / sizeof(int);

    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i+1 << " | Valor: " << x[i] << endl;
    }

    cin.get();
    
    return 0;
}
