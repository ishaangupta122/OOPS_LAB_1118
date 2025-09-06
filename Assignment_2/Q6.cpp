// Q6: Implement static member function using a C++ program.

#include <iostream>
using namespace std;

class Counter {
 private:
  static int count;  // Static data member

 public:
  static void counter() {  // Static data function
    count++;
  }

  static void display() {
    cout << "Current count: " << count << endl;
  }
};

int Counter::count = 0;

int main() {
  // Calling static member functions without creating objects
  Counter::display();
  Counter::counter();
  Counter::counter();
  Counter::display();

  return 0;
}
