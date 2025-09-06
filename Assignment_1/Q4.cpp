// 4. Create a structure in C++ containing the details of Students as details
// below and a main function to execute the structure.

// Data Members(properties):
// Name, Roll No, Degree, Hostel, CurrentCGPA;

// Member Function(behavior):
// addDetails(), updateDetails(), updateCGPA(), updateHostel(),
// displaydetails();

#include <iostream>
using namespace std;

struct Student {
  string name, degree, hostel;
  int roll_no;
  float currCGPA;

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
    cout << "Details Updated Successfully!\n";
  }

  void updateHostel() {
    cout << "\nEnter new Hostel: ";
    cin >> hostel;
  }

  void updateCGPA() {
    cout << "\nEnter new CGPA: ";
    cin >> currCGPA;
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