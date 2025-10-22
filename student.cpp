#include "student.h"  // include the student class header file
using namespace std;  // use the standard namespace

student::student() {  // default constructor definition
    name = "Unknown";  // initialize name
    age = 0;           // initialize age
    rollno = 0;        // initialize roll number
    gpa = 0;           // initialize GPA
}

student::student(string n, int a, int r, float g) {  // parameterized constructor definition
    name = n;   // assign name
    age = a;    // assign age
    rollno = r; // assign roll number
    gpa = g;    // assign GPA
}

student::~student() {  // destructor definition
    cout << "Destructor called for student: " << name << endl;  // display message when object destroyed
}

void student::setname(string n) {  // setter for name
    name = n;  
}
void student::setage(int a) {  // setter for age
    age = a;
}
void student::setrollno(int r) {  // setter for roll number
    rollno = r;
}
void student::setgpa(float g) {  // setter for GPA
    gpa = g;
}

string student::getName() {  // getter for name
    return name;
}
int student::getAge() {  // getter for age
    return age;
}
int student::getRollNo() {  // getter for roll number
    return rollno;
}
float student::getGPA() {  // getter for GPA
    return gpa;
}

void student::displayInfo() {  // display student details
    cout << "Name: " << name << endl;
    cout << "  Age: " << age << endl;
    cout << "  Roll No: " << rollno << endl;
    cout << "  GPA: " << gpa << endl;
    cout << "  Grade: " << calculateGrade() << endl;
}

char student::calculateGrade() {  // calculate grade based on GPA
    if (gpa >= 3.5) return 'A';       // GPA 3.5 or above → A
    else if (gpa >= 3.0) return 'B';  // GPA 3.0–3.49 → B
    else if (gpa >= 2.5) return 'C';  // GPA 2.5–2.99 → C
    else if (gpa >= 2.0) return 'D';  // GPA 2.0–2.49 → D
    else if (gpa >= 1.0) return 'E';  // GPA 1.0–1.99 → E
    else return 'F';                  // GPA below 1.0 → F
}
