#include <iostream>

using std::cout;
using std::endl;

int main() {
  int  i =  2,  j =  4,  k =  8;
  int *p = &i, *q = &j, *r = &k;

  k = i; // k = 2
  cout << i << j << k << *p << *q << *r << endl;

  p = q; // p = address of j
  cout << i << j << k << *p << *q << *r << endl;

  *q = *r; // q = value of r
  cout << i << j << k << *p << *q << *r << endl;

  return 0;
}
