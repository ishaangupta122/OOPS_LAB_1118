// Q5: 5. WAP to declare static public member variable, global and
// local variable with the same name. Initialize and display their contents.

#include <iostream>
using namespace std;

int value = 100;  // Global variable

class Demo {
 public:
  static int value;  // Static class member with same name
};

int Demo::value = 200;  // Initialization of static member outside class

int main() {
  int value = 300;  // Local variable with same name

  cout << "Local value = " << value << endl;
  cout << "Global value = " << ::value << endl;
  cout << "Static class value = " << Demo::value << endl;

  return 0;
}
