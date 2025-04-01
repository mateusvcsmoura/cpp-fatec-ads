#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    double time, speed, distance, usedFuel;
    
    cout << "Enter the time spent on the trip: ";
    cin >> time;
    cout << "Enter the average speed of the trip: ";
    cin >> speed;

    distance = time * speed;
    usedFuel = distance / 12;

    cout << "\n\nTime spent: " << time << "\nAverage Speed: " << speed << "\nDistance: " << distance << "\nUsed Fuel (L): " << usedFuel << endl;

    cin.get();
    cin.get();
    return 0;
}
