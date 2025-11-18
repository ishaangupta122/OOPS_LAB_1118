// 7. Write a program to convert basic data type (float) to user defined data type (object).
// class Test {
// private: //....
// public:
// Test ( data_type) { // conversion code }
// };

#include <iostream>
using namespace std;

class Test {
 private:
  float value;

 public:
  Test(float val) {
    value = val;
  }

  void show() {
    cout << "Value converted into object = " << value << endl;
  }
};

int main() {
  float f = 12.75;

  Test t(f);

  t.show();

  return 0;
}
