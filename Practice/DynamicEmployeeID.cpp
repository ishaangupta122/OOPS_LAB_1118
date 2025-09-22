#include <iostream>
using namespace std;

class Employee {
 private:
  int* empID;

 public:
  Employee() {
    empID = new int;
    cout << "Enter Employee ID: ";
    cin >> *empID;
  }

  ~Employee() {
    delete empID;
  }

  void display() {
    cout << "Employee ID: " << *empID << endl;
  }
};

int main() {
  int n;
  cout << "Enter number of employees: ";
  cin >> n;

  Employee* employees = new Employee[n];

  cout << "\n--- Employee IDs ---\n";
  for (int i = 0; i < n; i++) {
    employees[i].display();
  }

  delete[] employees;

  return 0;
}
