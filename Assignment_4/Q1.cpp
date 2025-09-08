// 1. Most of the time we use public mode of inheritance, for example class Derived:
// public Base{} Try protected and private access modifiers to understand the difference of various
// modes of inheritance.

#include <iostream>
using namespace std;

class Base {
 public:
  Base() {
    cout << "Base Constructor called" << endl;
  }

  void show() {
    cout << "Base Class Show Function: " << endl;
  }

  ~Base() {
    cout << "Base Destructor" << endl;
  }
};

// Protected Inheritance
class ProtectedDerived : private Base {
 public:
  ProtectedDerived() {
    cout << "Protected Derived Constructor called" << endl;
    show();  // Allowed
  }

  void protectedShow() {
    cout << "Protected Show" << endl;
  }

  ~ProtectedDerived() {
    cout << "ProtectedDerived Destructor" << endl;
  }
};

// Private Sub Class Inheritance
class PrivateDerived : protected ProtectedDerived {
 public:
  PrivateDerived() {
    cout << "Private Derived Constructor called" << endl;
    // show();  // Cannot Access in Sub Class using private, but will run show() called in parent
    // class
    protectedShow();
  }

  ~PrivateDerived() {
    cout << "PrivateDerived Destructor" << endl;
  }
};

int main() {
  ProtectedDerived obj2;
  // obj2.show();   // Not Allowed, used private while inheriting

  PrivateDerived obj3;
  // obj3.protectedShow();  // Not Allowed, used protected while inheriting

  return 0;
}