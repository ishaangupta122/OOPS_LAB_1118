// 5. Differentiate between private and public access scope. Perform the
// question no 4 with class instead of structure with having the data members
// private and some member functions in private scope and some in public scope.

#include <iostream>
using namespace std;

class Student {
 private:
  string name, degree, hostel;
  int roll_no;
  float currCGPA;

  void displayUpdateSuccess() {
    cout << "Details updated successfully!\n";
  }

 public:
  void addDetails() {
    cout << "\nEnter Student Details: \n";
    cout << "Name: ";
    cin >> name;
    cout << "Roll Number: ";
    cin >> roll_no;
    cout << "Degree: ";
    cin >> degree;
    cout << "Hostel: ";
    cin >> hostel;
    cout << "CGPA: ";
    cin >> currCGPA;
    cout << endl;
  }

  void updateDetails(string name, int roll, string deg, string host, float cgpa) {
    cout << "\nUpdating Student Details...\n";
    this->name = name;
    this->roll_no = roll;
    this->degree = deg;
    this->hostel = host;
    this->currCGPA = cgpa;
    displayUpdateSuccess();
  }

  void updateCGPA() {
    cout << "\nEnter new CGPA: ";
    cin >> currCGPA;
  }

  void updateHostel() {
    cout << "\nEnter new Hostel: ";
    cin >> hostel;
  }

  void displayDetails() {
    cout << "\n--- Student Details ---\n";
    cout << "Name: " << name << endl;
    cout << "Roll Number: " << roll_no << endl;
    cout << "Degree: " << degree << endl;
    cout << "Hostel: " << hostel << endl;
    cout << "CGPA: " << currCGPA << endl;
    cout << "-----------------------\n";
  }
};

int main() {
  Student s1;

  s1.addDetails();
  s1.displayDetails();

  s1.updateDetails("Ishaan Gupta", 12345, "B.Tech", "A-Block", 9.1);

  s1.updateCGPA();
  s1.updateHostel();

  s1.displayDetails();

  return 0;
}
