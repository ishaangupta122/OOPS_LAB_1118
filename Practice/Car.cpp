// Design a Car class with private attributes, speed, and fuel,
// and implement a constructor that uses this pointer to initialize these
// attributes.Develop all the necessary methods required to display the details.

#include <iostream>
using namespace std;

class Car {
  float speed, fuel;

 public:
  Car(float speed, float fuel) {
    this->speed = speed;
    this->fuel = fuel;
  }

  void display() {
    cout << "Car Details:" << endl;
    cout << "Speed: " << speed << " km/h" << endl;
    cout << "Fuel: " << fuel << " liters" << endl;
  }

  ~Car() {
    cout << "Thank You" << endl;
  }
};

int main() {
  Car c(40, 10);
  c.display();
  return 0;
}