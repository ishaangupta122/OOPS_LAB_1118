// 6. Write a program to add data objects of two different classes using friend functions.

#include <iostream>
using namespace std;

class B;  // Forward declaration

class A {
  int value;

 public:
  A(int v) : value(v) {}

  friend int add(A, B);
};

class B {
  int value;

 public:
  B(int v) : value(v) {}

  friend int add(A, B);
};

int add(A objA, B objB) {
  return objA.value + objB.value;
}

int main() {
  A a(15);
  B b(25);

  cout << "Sum of values from A and B: " << add(a, b) << endl;

  return 0;
}
