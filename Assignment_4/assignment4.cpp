#include <iostream>
using namespace std;

// O1
// class Rectangle {
//     float length, breadth, count = 0;

// public:
//     Rectangle() {
//         length = 0;
//         breadth = 0;
//     }
    
//     Rectangle(float l, float b) {
//         length = l;
//         breadth = b;
//     }
    
//     Rectangle(float lb) {
//         length = lb;
//         breadth = lb;
//     }
    
//     float area() {
//         return length * breadth;
//     }
    
//     void result() {
//         cout << "Rectangle " << count + 1 << endl;
//         cout << "Length of Rectangle: " << length << endl;
//         cout << "Breadth of Rectanlge: " << breadth << endl;
//         cout << "Area of Rectangle = " << area() << endl << endl;
//     }
// };

// int main() {
//     Rectangle obj1;         // no parameter
//     Rectangle obj2(4);      // one parameter
//     Rectangle obj3(5, 2);   // two parameters

//     obj1.result();  
//     obj2.result();  
//     obj3.result();  

//     return 0;
// }

// Q2
// class Rectangle {
//     float length, breadth;

// public:

//     Rectangle() {
//         length = 0;
//         breadth = 0;
//         cout << "No Argument Constructor\n";
//     }
    
//     Rectangle(float lb) {
//         length = lb;
//         breadth = lb;
//         cout << "One Argument Constructor\n";
//     }
    
//     Rectangle(float l, float b) {
//         length = l;
//         breadth = b;
//         cout << "Two Argument Constructor\n\n";
//     }
    
//     float area() {
//         return length * breadth;
//     }
    
//     void result() {
//         cout << "Length of Rectangle: " << length << endl;
//         cout << "Breadth of Rectanlge: " << breadth << endl;
//         cout << "Area of Rectangle = " << area() << endl << endl;
//     }
    
//     ~Rectangle(){
//         cout << "Destructor Called !\n";
//     }
// };

// int main() {
//     Rectangle arr[] = { Rectangle(), Rectangle(5), Rectangle(3, 3) };         
    
//     for (int i = 0; i < 3; i++) {
//         cout << "Rectangle " << (i + 1) << "\n";
//         arr[i].result();
//     }

//     return 0;
// }

// Q3
// class Rectangle {
//     float length, breadth;

// public:

//     Rectangle() {
//         length = 0;
//         breadth = 0;
//         cout << "No Argument\n";
//     }
    
//     Rectangle(float lb = 1) {
//         length = lb;
//         breadth = lb;
//         cout << "One Argument\n";
//     }
    
//     Rectangle(float l = 1, float b = 1) {
//         length = l;
//         breadth = b;
//         cout << "Two Argument\n\n";
//     }
    
//     float area() {
//         return length * breadth;
//     }
    
//     void result() {
//         cout << "Length of Rectangle: " << length << endl;
//         cout << "Breadth of Rectanlge: " << breadth << endl;
//         cout << "Area of Rectangle = " << area() << endl << endl;
//     }
    
//     ~Rectangle(){
//         cout << "Destructor Called !\n";
//     }
// };

// int main() {
//     Rectangle arr[] = { Rectangle(), Rectangle(5), Rectangle(3, 3) };         
    
//     for (int i = 0; i < 3; i++) {
//         cout << "Rectangle " << (i + 1) << "\n";
//         arr[i].result();
//     }

//     return 0;
// }

// Q4.
// #include <iostream>
// using namespace std;

class Simple {
    int x;

public:
    void setX(int x) {
        this->x = x;  // Using this pointer
    }

    void print() {
        cout << "x = " << x << endl;
    }
};

int main() {
    Simple obj;

    Simple* ptr = &obj;  

    obj.setX(5);    
    obj.print();

    ptr->setX(10);  
    ptr->print();

    return 0;
}
