// 3. Create code snippets that illustrates the use of scope resolution operator
// (: :) for the following uses:

// a.	Member functions defined outside class
// b.	To access a global variable when there is a local variable with same name
// c.	To access a class’s static variables
// d.	Including in-built libraries

#include <iostream>
using namespace std;

class Demo {
 public:
  static int count;

  void show();
};

// a. Member function defined outside the class
void Demo::show() {
  cout << "This Member Function is Defined Using :: operator !" << endl;
}

// c. Accessing Static variable of class
int Demo::count = 10;

int x = 100;

int main() {
  int x = 50;

  // a. Calling member function defind using ::
  Demo d;
  d.show();

  // b. Accessing Global Variable with ::
  cout << "\nLocal x = " << x << endl;
  cout << "Global x = " << ::x << " (accessed using ::x)" << endl;

  // c. Accessing static variable of class
  cout << "\nStatic variable = " << Demo::count << " (accessed using Demo::count)" << endl;

  // d. Using built-in library with std::
  std::cout << "\nPrinting using std::cout from <iostream> with :: operator" << std::endl;

  return 0;
}
