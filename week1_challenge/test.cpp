#include <iostream>

using std::cout;
using std::endl;

int main() {
  int *i = new int;
  *i = 0;
  int &j = *i;
  j++;

  cout << "Value of i: " << *i << endl;
  cout << "Address of i: " << i << endl;
  cout << "Address of j: " << &j << endl;

  return 0;
};
