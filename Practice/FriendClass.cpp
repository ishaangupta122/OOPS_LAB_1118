#include <iostream>
using namespace std;

class Engine {
  int horsepower;

 public:
  Engine(int hp) : horsepower(hp) {}
  // Declare Car as friend class
  friend class Car;
};

class Car {
 public:
  void showEnginePower(Engine e) {
    cout << "Engine horsepower = " << e.horsepower << endl;
    // Can access private members of Engine
  }
};

int main() {
  Engine e1(120);
  Car c1;
  c1.showEnginePower(e1);
  return 0;
}
