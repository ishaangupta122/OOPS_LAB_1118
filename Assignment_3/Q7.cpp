// 7. Write a program to demonstrate the working of friend class.

#include <iostream>
using namespace std;

class A {
 private:
  int secret;

 public:
  A(int s) {
    secret = s;
  }

  // Declare class B as a friend
  friend class B;
};

class B {
 public:
  void showSecret(A a) {
    cout << "Accessing private data of A from B: " << a.secret << endl;
  }
};

int main() {
  A objA(100);
  B objB;

  objB.showSecret(objA);

  return 0;
}
