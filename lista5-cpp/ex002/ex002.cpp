#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

struct adjustWages {
  vector<double> salary;
  vector<double> readjustPercentual;

  vector<double> readjustedSalary;
};

struct adjustWages adWages;

void storeData () {
  double salary, readjustPercentual;

  cout << "Enter Salary: $ ";
  cin >> salary;

  cout << "Enter Readjust Percentual: dec ";
  cin >> readjustPercentual;

  adWages.salary.push_back(salary);
  adWages.readjustPercentual.push_back(readjustPercentual);
}

void calculateData () {
  adWages.readjustedSalary.clear();
  for (int i = 0; i < adWages.salary.size(); i++) {
    adWages.readjustedSalary.push_back(adWages.salary[i] + (adWages.salary[i] * adWages.readjustPercentual[i]));
  }
}

void showData () {  
  for (int i = 0; i < adWages.readjustedSalary.size(); i++) {
    cout << "Employee " << i+1 << " | Old Salary: $" << adWages.salary[i] << " | New Salary: $" << adWages.readjustedSalary[i] << endl;
  }
}

int main() {
  int input;

  do {
    cout << "\nMenu\n\n1 - Storage Data\n2 - Show Data\n3 - Leave\n\nOption: ";
    cin >> input;

    switch (input) {
      case 1:
        storeData();
        break;
      case 2:
        calculateData();
        showData();
        break;
      case 3:
        cout << "Leaving.." << endl;
        exit(0);
        break;
      default:
        cout << "Wrong Input" << endl;
    }

  } while (input != 3);

}
