#include <iostream>
#include <cstdlib>
using namespace std;

const int n = 2;
int line = -1;

struct People {
  string name[n];
  string sex[n];
  int age[n];
  double salary[n];
}; People Person;

People *pt = &Person;

void readStructLine () {
  string name, sex;
  int age;
  double salary;

  if (line == n-1) return;

  line++;

  cout << "Enter Name: ";
  getline(cin, name);

  cout << "Enter Sex [F/M]: ";
  getline(cin, sex);

  cout << "Enter Age: ";
  cin >> age;
  cin.ignore();

  cout << "Enter Salary: $ ";
  cin >> salary;
  cin.ignore();

  pt->name[line] = name;
  pt->sex[line] = sex;
  pt->age[line] = age;
  pt->salary[line] = salary + (salary * 0.1);
}

void showStructLines () {
  for (int i = 0; i <= line; i++) {
    cout << "\nShowing Struct Line " << i+1 << endl;
    cout << "Name: " << pt->name[i] << endl;
    cout << "Sex: " << pt->sex[i] << endl;
    cout << "Age: " << pt->age[i] << endl;
    cout << "Salary (reformed): $" << pt->salary[i] << endl;
  }
}

int main() {
  int input;

  do {
    cout << "\nMenu\n\n1 - Read New Line\n2 - Show All Lines\n3 - Leave\n\nOption: ";
    cin >> input;
    cin.ignore();

    switch (input) {
      case 1:
        readStructLine();
        break;
      case 2:
        showStructLines();
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
