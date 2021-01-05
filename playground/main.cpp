#include <iostream>
using std::cout;
using std::endl;

int main() {
  int x = 5;
  int y = 10;

  cout << "Value of x: " << x << endl;
  cout << "Value of y: " << y << endl;

  cout << "Address of y: " << &x << endl;
  cout << "Address of y: " << &y << endl;

  int &ref = x; // 5

  cout << "Value of ref: " << ref << endl;
  cout << "Address of ref: " << &ref << endl;

  int * xpointer = &x;
  cout << "What is xpointer before dereferencing? " << xpointer << endl;

  cout << "Deferenceing? " << *xpointer << endl;

  cout << "What is xpointer now? " << xpointer << endl;
  cout << "What is x then? " << x << endl;

  int * nullpointer = nullptr;
  cout << "What happens when nullpointer is called? " << nullpointer << endl;
  // cout << "What happens when nullpointer is dereferenced? " << *nullpointer << endl;

  nullpointer = &x;
  cout << "Reassigning the nullpointer: " << nullpointer << endl;

  // What happens when trying to reassign?
  int starter = 6;
  int to_be_reassigned = starter; // This is a copy of value?

  cout << "starter = " << starter << endl;
  cout << "to_be_reassigned = " << to_be_reassigned << endl;

  starter = 10;

  cout << "starter = " << starter << endl;
  cout << "to_be_reassigned = " << to_be_reassigned << endl;

  return 0;
}
