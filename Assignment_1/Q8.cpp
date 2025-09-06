// 8. Implement namespace in a program to illustrate the use of same name
// variables and functions in different sections libraries of the code.

#include <iostream>
using namespace std;

namespace A {
int value = 5;

void display() {
  cout << "1st Namespace value: " << value << endl;
}
}  // namespace A

namespace B {
int value = 10;

void display() {
  cout << "2nd Namespace value: " << value << endl;
}
}  // namespace B

int main() {
  using namespace A;
  using namespace B;

  A::display();
  B::display();

  return 0;
}