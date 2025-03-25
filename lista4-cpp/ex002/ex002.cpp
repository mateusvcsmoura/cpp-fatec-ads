#include <iostream>
#include <cstdlib>

using namespace std;

int grades[] = {1, 3, 4, -1};

float arrayAverage () {
    float sum = 0;
    int n = sizeof(grades) / sizeof(int);

    for (int i = 0; i < n; i++) {
        sum = sum + grades[i];
    }

    float average = sum / n;

    return average;
}

int main () {
    float averageValue = arrayAverage();

    cout << "Average: " << averageValue << endl;

    cin.get();

    return 0;
}

