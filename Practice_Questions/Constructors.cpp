#include <iostream>
using namespace std;

class Example {
  float i, j;

 public:
  Example(float i, float j) : i(i), j(j) {
    cout << "Paramerterized" << endl;
  }
  void Copy(Example e) {
    this->i = e.i;
    this->j = e.j;
    cout << "Copy" << endl;
  }
  void display() {
    cout << "I = " << this->i << ", J = " << j << endl;
  }
};

int main() {
  Example e1(2, 5.2), e2(0, 0);
  e1.display();
  e2.Copy(e1);
  e2.display();

  return 0;
}