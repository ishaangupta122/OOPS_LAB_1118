#include <iostream>
using namespace std;

class DB;

class DM {
  float meters;
  float cm;

 public:
  DM(float m = 0.0f, float c = 0.0f) : meters(m), cm(c) {}

  void display() {
    cout << "Distance in meters and cm: " << meters << " m " << cm << " cm" << endl;
  }

  float toTotalCm() {
    return (meters * 100.0f) + cm;
  }

  friend void sum(DM& a, DB& b);
};

class DB {
  float feet;
  float inches;

 public:
  DB(float f = 0.0f, float in = 0.0f) : feet(f), inches(in) {}

  void display() {
    cout << "Distance in feet and inches: " << feet << " ft " << inches << " in" << endl;
  }

  float toTotalCm() {
    float totalInches = (feet * 12.0f) + inches;
    return totalInches * 2.54f;  // 1 inch = 2.54 cm
  }

  friend void sum(DM& a, DB& b);
};

void sum(DM& a, DB& b) {
  float totalCm = a.toTotalCm() + b.toTotalCm();

  // Convert to meters + centimeters
  int metersPart = (int)(totalCm / 100.0f);
  float cmPart = totalCm - (metersPart * 100.0f);

  // Convert to feet + inches
  float totalInches = totalCm * 0.393701f;
  int feetPart = (int)(totalInches / 12.0f);
  float inchesPart = totalInches - (feetPart * 12.0f);

  cout << "\n--- Sum of distances ---" << endl;
  cout << "In Meters and Centimeters: " << metersPart << " meters " << cmPart << " centimeters"
       << endl;
  cout << "In Feet and Inches: " << feetPart << " feets " << inchesPart << " inches" << endl;
}

int main() {
  float m, c, f, in;

  cout << "Enter Distance in: " << endl;
  cout << "Meters: ";
  cin >> m;
  cout << "Centimeters: ";
  cin >> c;
  cout << endl;
  cout << "Enter Distance in: " << endl;
  cout << "Feets: ";
  cin >> f;
  cout << "Inches: ";
  cin >> in;

  DM dm(m, c);
  DB db(f, in);

  cout << "\nInput distances:" << endl;
  dm.display();
  db.display();

  sum(dm, db);

  return 0;
}
