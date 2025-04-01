#include <iostream>
#include <cstdlib>

using namespace std;

int numbers[] = { 1, 5, 10, -1 };

void higherLower () {
    int higher, lower;
    int arrayLength = sizeof(numbers) / sizeof(int);

    for (int i = 0; i < arrayLength; i++) {
        if (numbers[i] > higher || i == 0) higher = numbers[i];
        if (numbers[i] < lower || i == 0) lower = numbers[i];
    }

    cout << "Maior: " << higher << endl;
    cout << "Menor: " << lower << endl;
}

int main () {
    higherLower();

    cin.get();

    return 0;
}

