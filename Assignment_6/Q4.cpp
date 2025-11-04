// 4. Write a program with Student as abstract class and create derive classes Engineering, Medicine
// and Science from base class Student. Create the objects of the derived classes and process them
// and access them using array of pointer of type base class Student.

#include <iostream>
#include <string>
using namespace std;

class Student {
 protected:
  string name;
  int rollNo;

 public:
  Student(string n, int r) : name(n), rollNo(r) {}

  virtual void displayInfo() = 0;

  virtual ~Student() {}
};

class Engineering : public Student {
  string branch;

 public:
  Engineering(string n, int r, string b) : Student(n, r), branch(b) {}

  void displayInfo() override {
    cout << "Engineering Student:\n";
    cout << "Name: " << name << "\nRoll No: " << rollNo << "\nBranch: " << branch << "\n\n";
  }
};

class Medicine : public Student {
  string specialization;

 public:
  Medicine(string n, int r, string s) : Student(n, r), specialization(s) {}

  void displayInfo() override {
    cout << "Medicine Student:\n";
    cout << "Name: " << name << "\nRoll No: " << rollNo << "\nSpecialization: " << specialization
         << "\n\n";
  }
};

class Science : public Student {
  string major;

 public:
  Science(string n, int r, string m) : Student(n, r), major(m) {}

  void displayInfo() override {
    cout << "Science Student:\n";
    cout << "Name: " << name << "\nRoll No: " << rollNo << "\nMajor: " << major << "\n\n";
  }
};

int main() {
  Student* students[3];

  students[0] = new Engineering("Alice", 101, "Computer Science");
  students[1] = new Medicine("Bob", 202, "Cardiology");
  students[2] = new Science("Charlie", 303, "Physics");

  for (int i = 0; i < 3; ++i) {
    students[i]->displayInfo();
  }

  for (int i = 0; i < 3; ++i) {
    delete students[i];
  }

  return 0;
}
