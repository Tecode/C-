#include <iostream>
using namespace std;

int main() {
  int *p;
  int a = 20;
  p = &a;
  int &c = a;
  cout << *p << "--" << c << endl;
  return 0;
}