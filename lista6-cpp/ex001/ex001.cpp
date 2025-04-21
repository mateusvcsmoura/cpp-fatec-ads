#include <iostream>
#include <cstdlib>
using namespace std;

double sum (int *pta, int *ptb) {
  return *pta + *ptb;
}

int main () {
  int a = 10, b = 20;
  double sumString = sum(&a, &b);

  cout << "Soma: " << sumString << endl;
  return 0;
}

