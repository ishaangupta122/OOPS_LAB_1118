// 3. Write a C++ program to implement the diamond problem (hybrid inheritance). State the necessary
// assumptions using comments. – (HINT: use virtual base class)

#include <iostream>
using namespace std;

class A {
 public:
  int value;
  A() {
    cout << "Constructor of A called" << endl;
    value = 10;
  }
};

class B : virtual public A {
 public:
  B() {
    cout << "Constructor of B called" << endl;
  }
};

class C : virtual public A {
 public:
  C() {
    cout << "Constructor of C called" << endl;
  }
};

class D : public B, public C {
 public:
  D() {
    cout << "Constructor of D called" << endl;
  }

  void show() {
    cout << "Value from class A = " << value << endl;
  }
};

int main() {
  cout << "Performing Hybrid Inheritance: \n\n";

  D obj;
  obj.show();

  return 0;
}
