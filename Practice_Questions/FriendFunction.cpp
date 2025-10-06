#include <iostream>
using namespace std;

class Box {
  int length;

 public:
  Box(int l) : length(l) {}

  // Friend function declaration
  friend void showLength(Box b);
};

// Friend function definition
void showLength(Box b) {
  cout << "Length of box = " << b.length << endl;
  // allowed even though length is private
}

int main() {
  Box b1(10);
  showLength(b1);  // accessing private member via friend
  return 0;
}
