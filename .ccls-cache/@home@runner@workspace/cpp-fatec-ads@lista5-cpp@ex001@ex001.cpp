#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct values {
  vector<int> a;
  vector<int> b;
  vector<int> c;
  vector<int> d;

  vector<string> p;
  vector<string> s;
};

struct values tbValues;

void calculateData();

void storageData () {
  int a, b, c, d;

  cout << "Enter value A: ";
  cin >> a;

  cout << "Enter value B: ";
  cin >> b;

  cout << "Enter value C: ";
  cin >> c;

  cout << "Enter value D: ";
  cin >> d;

  tbValues.a.push_back(a);
  tbValues.b.push_back(b);
  tbValues.c.push_back(c);
  tbValues.d.push_back(d);
}

void calculateData () {
  int arrayLengths = min({tbValues.a.size(), tbValues.b.size(), tbValues.c.size(), tbValues.d.size()});

  // Clear old calcs before recalculating
  tbValues.p.clear();
  tbValues.s.clear();

  for (int i = 0; i < arrayLengths; i++) {
    if (i < tbValues.a.size() && i < tbValues.c.size()) {
      tbValues.p.push_back("First * Third: " + to_string(tbValues.a[i] * tbValues.c[i]));
    }

    if (i < tbValues.b.size() && i < tbValues.d.size()) {
      tbValues.s.push_back("Second + Forth: " + to_string(tbValues.b[i] + tbValues.d[i]));
    }
  }
  
}

void showData () {
  calculateData();
  
  for (int i = 0; i < tbValues.p.size(); i++) {
    cout << tbValues.p[i] << endl;
  }

  for (int i = 0; i < tbValues.s.size(); i++) {
    cout << tbValues.s[i] << endl;
  }
}

int main() {
  int input;

  do {
    cout << "\nMenu\n\n1 - Storage Data\n2 - Show Data\n3 - Leave\n\nOption: ";
    cin >> input;

    switch (input) {
      case 1:
        storageData();
        break;
      case 2:
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
