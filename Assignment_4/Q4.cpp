// 4. Class Student contains data members RollNo and Name as protected and member functions
// GetDetails() to get RollNo and Name and DisplayDetails() to display RollNo and Name. Class Marks
// is publicly inherited from Student. Student class contains protected data member Subject1 and
// Subject2 i.e. marks obtained in two subjects and GetMarks() and DisplayMarks() are two public
// member functions. Class Result is publicly inherited from Marks. It contains private data member
// TotalMarks and two public methods CalculateResult() and DisplayResult() with status whether the
// student has “PASSED” or “FAILED”. Write a C ++ program to show the results according to the
// following formats:

// Enter the number of students:  2
// Enter student roll number: 1
// Enter name of the student: A
// Enter the marks of subject 1: 27
// Enter the marks of subject 2: 32

// Enter student roll number: 2
// Enter name of the student: B
// Enter the marks of subject 1: 65
// Enter the marks of subject 2: 45

// Roll No.		Name	Subject1	Subject2 	Total Marks Obtained	Result
//--------------------------------------------------------------------------------------------------
// 1		    A	    27		    32		    59				        FAILED
// 2		    B	    65		    45		    110                     PASSED
// ----------------------------------------------------------------------------------------------------
// Make the necessary assumptions with comments.

#include <iomanip>
#include <iostream>

using namespace std;

class Student {
 protected:
  int roll_no;
  string name;

 public:
  float getDetails() {
    cout << "Enter Roll No: ";
    cin >> roll_no;
    cout << "Enter Name: ";
    cin >> name;
  }

  void DisplayDetails() {
    cout << setw(8) << roll_no << setw(12) << name;
  }
};

class Marks : public Student {
 protected:
  float subject1, subject2;

 public:
  float getMarks() {
    cout << "Enter Marks in 1st Subject: ";
    cin >> subject1;
    cout << "Enter Marks in 2nd Subject: ";
    cin >> subject2;
  }

  void DisplayMarks() {
    cout << setw(10) << subject1 << setw(12) << subject2;
  }
};

class Result : public Marks {
 protected:
  float totalMarks = 0;

 public:
  float calcResult() {
    totalMarks = subject1 + subject2;
    cout << totalMarks;
    return totalMarks;
  }

  void DisplayResult() {
    DisplayDetails();
    DisplayMarks();
    cout << setw(12) << totalMarks << setw(15) << (totalMarks >= 40 ? "PASSED" : "FAILED") << endl;
  }
};

int main() {
  int n;

  cout << "Enter No. Of Students: ";
  cin >> n;
  cout << endl;

  Result* students = new Result[n];

  for (int i = 0; i < n; i++) {
    students[i].getDetails();
    students[i].getMarks();
    cout << endl;
  }

  cout << "\n"
       << setw(8) << "Roll No." << setw(12) << "Name" << setw(10) << "Subject1" << setw(12)
       << "Subject2" << setw(12) << "Total" << setw(15) << "Result" << endl;
  cout << string(70, '-') << endl;

  for (int i = 0; i < n; i++) {
    students[i].DisplayResult();
  }

  cout << string(70, '-') << endl;

  delete[] students;

  return 0;
}