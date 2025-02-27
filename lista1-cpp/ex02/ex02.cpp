#include <iostream>
#include <cmath>
#define pi 3.14
using namespace std;

int main () 
{
    double volume, radius, height;

    cout << "Enter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;

    volume = pi * pow(radius, 2) * height;
    cout << "The volume of the cylinder is: " << volume << endl;

    cin.get();
    cin.get();
    return 0;
}
