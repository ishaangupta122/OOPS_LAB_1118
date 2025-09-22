#include <iostream>
using namespace std;

class Student {
  string name;
  int rollNo;
  static int count;

 public:
  Student(string n, int r) {
    this->name = n;
    this->rollNo = r;
    count++;
  }

  inline void showDetails() {
    cout << "Student Name: " << name << endl;
    cout << "Student Roll No: " << rollNo << endl;
  }

  static int getCount();
};

int Student::count = 0;

int Student::getCount() {
  return count;
}

int main() {
  Student s1("Ishaan", 1), s2("Megha", 2), s3("C", 3);

  s1.showDetails();
  s2.showDetails();
  s3.showDetails();

  int totalStudents = Student::getCount();
  cout << "Total Students: " << totalStudents << endl;

  return 0;
}