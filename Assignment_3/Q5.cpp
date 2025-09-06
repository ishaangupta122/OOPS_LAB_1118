// 5. Write a program to swap private values of two classes using a friend function.

#include <iostream>
using namespace std;

class B;  // Forward declaration

class A {
 private:
  int value;

 public:
  A(int v) : value(v) {}
  void display() {
    cout << "A: " << value << endl;
  }

  friend void swapValues(A&, B&);
};

class B {
 private:
  int value;

 public:
  B(int v) : value(v) {}
  void display() {
    cout << "B: " << value << endl;
  }

  friend void swapValues(A&, B&);
};

void swapValues(A& objA, B& objB) {
  int temp = objA.value;
  objA.value = objB.value;
  objB.value = temp;
}

int main() {
  A a(10);
  B b(20);

  cout << "Before swap:\n";
  a.display();
  b.display();

  swapValues(a, b);

  cout << "\nAfter swap:\n";
  a.display();
  b.display();

  return 0;
}
