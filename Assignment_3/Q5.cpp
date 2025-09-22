// 5. Write a program to swap private values of two classes using a friend function.

#include <iostream>
using namespace std;

class B;  // Forward declaration

class A {
  int a, b;

 public:
  A(int a, int b) : a(a), b(b) {}

  void display() {
    cout << "Class 1" << endl;
    cout << "A: " << a << endl;
    cout << "B: " << b << endl;
  }

  friend void swapValues(A&, B&);
};

class B {
  int a, b;

 public:
  B(int a, int b) : a(a), b(b) {}

  void display() {
    cout << "Class B" << endl;
    cout << "A: " << a << endl;
    cout << "B: " << b << endl;
  }

  friend void swapValues(A&, B&);
};

void swapValues(A& objA, B& objB) {
  int temp1 = objA.a;
  objA.a = objB.a;
  objB.a = temp1;
  int temp2 = objA.b;
  objA.b = objB.b;
  objB.b = temp2;
}

int main() {
  A a(10, 20);
  B b(30, 40);

  cout << "Before swap:\n";
  a.display();
  b.display();

  swapValues(a, b);

  cout << "\nAfter swap:\n";
  a.display();
  b.display();

  return 0;
}
