// 4. Write a C++ program creating an abstract class Student. Create three derived classes Science,
// Art and Commerce from the base class. Create the objects of the derived classes and process them
// and access them using array of pointer of type Student.

#include <iostream>
#include <string>
using namespace std;

class Student {
 protected:
  string name;
  int rollNo;

 public:
  Student(string n, int r) {
    name = n;
    rollNo = r;
  }

  virtual void showDetails() = 0;

  virtual ~Student() {}
};

class Science : public Student {
  float physics, chemistry, maths;

 public:
  Science(string n, int r, float p, float c, float m) : Student(n, r) {
    physics = p;
    chemistry = c;
    maths = m;
  }

  void showDetails() override {
    cout << "\n---- Science Student ----" << endl;
    cout << "Name: " << name << endl;
    cout << "Roll No: " << rollNo << endl;
    cout << "\nMarks of Student:" << endl;
    cout << "Physics: " << physics << endl;
    cout << "Chemistry: " << chemistry << endl;
    cout << "Mathematics: " << maths << endl;
    cout << "-------------------------" << endl;
  }
};

class Art : public Student {
  float history, literature;

 public:
  Art(string n, int r, float h, float l) : Student(n, r) {
    history = h;
    literature = l;
  }

  void showDetails() override {
    cout << "\n---- Art Student ----" << endl;
    cout << "Name: " << name << endl;
    cout << "Roll No: " << rollNo << endl;
    cout << "\nMarks of Student:" << endl;
    cout << "History: " << history << endl;
    cout << "Literature: " << literature << endl;
    cout << "---------------------" << endl;
  }
};

class Commerce : public Student {
  float accounts, economics, businessStudies;

 public:
  Commerce(string n, int r, float a, float e, float b) : Student(n, r) {
    accounts = a;
    economics = e;
    businessStudies = b;
  }

  void showDetails() override {
    cout << "\n---- Commerce Student ----" << endl;
    cout << "Name: " << name << endl;
    cout << "Roll No: " << rollNo << endl;
    cout << "\nMarks of Student:" << endl;
    cout << "Accounts : " << accounts << endl;
    cout << "Economics: " << economics << endl;
    cout << "Business Studies: " << businessStudies << endl;
    cout << "--------------------------" << endl;
  }
};

int main() {
  Student* students[3];

  students[0] = new Science("Aarav", 101, 85, 90, 88);
  students[1] = new Art("Palak", 102, 80, 92);
  students[2] = new Commerce("Rohan", 103, 75, 89, 84);

  for (int i = 0; i < 3; i++) {
    students[i]->showDetails();
  }

  for (int i = 0; i < 3; i++) {
    delete students[i];
  }

  return 0;
}
