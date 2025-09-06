// 6. Create a code snippet that illustrates the following:
// a) Calling of private member functions inside public member function
// b) Access private member functions inside public member function

#include <iostream>
using namespace std;

class MyClass {
 private:
  int val = 10;

  void privateFunction() {
    cout << "Private function called!" << endl;
    cout << "Value: " << val << endl;
  }

 public:
  void publicFunction() {
    cout << "Public function called!" << endl;
    privateFunction();  // Calling private member function
  }
};

int main() {
  MyClass obj;
  obj.publicFunction();  // Accessing private member function

  return 0;
}
