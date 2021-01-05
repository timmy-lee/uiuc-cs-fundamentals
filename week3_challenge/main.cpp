/* Class Pair has already been declared
 * as shown in the following comments:
 *
 * class Pair {
 * public:
 *   int *pa,*pb;
 *   Pair(int, int);
 *   Pair(const Pair &);
 *  ~Pair();
 * };
 *
 * Implement its member functions below.
 */

#include <iostream>
using std::cout;
using std::endl;

 class Pair {
  public:
    int *pa,*pb;
    Pair(int, int);
    Pair(const Pair &);
    ~Pair();
 };

Pair::Pair(int x, int y) {
  pa = new int(x);
  pb = new int(y);
  cout << "Constructor address of x: " << &x << endl;
  cout << "Constructor address of y: " << &y << endl;

  cout << "Constructor pa: " << pa << endl;
  cout << "Constructor pb: " << pb << endl;
};

Pair::Pair(const Pair & obj) {
  pa = new int(*obj.pa);
  pb = new int(*obj.pb);

  cout << "Copy address of pa: " << obj.pa << endl;
  cout << "Copy address of pb: " << obj.pb << endl;

  cout << "Copy pa: " << pa << endl;
  cout << "Copy pb: " << pb << endl;
};

Pair::~Pair() {
  delete pa;
  delete pb;
  pa = nullptr;
  pa = nullptr;
};

 /* Here is a main() function you can use
  * to check your implementation of the
  * class Pair member functions.
  */

int main() {
  Pair p(15,16);
  Pair q(p);
  Pair *hp = new Pair(23,42);
  delete hp;

  std::cout << "If this message is printed,"
    << " at least the program hasn't crashed yet!\n"
    << "But you may want to print other diagnostic messages too." << std::endl;
  return 0;
}
