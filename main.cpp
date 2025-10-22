#include "student.h"  // include the student class header file

int main() {  // main function starts
    student s1;  // create first student object using default constructor
    s1.setname("Hassan");  // set name for s1
    s1.setage(22);         // set age for s1
    s1.setrollno(201);     // set roll number for s1
    s1.setgpa(3.6);        // set GPA for s1
    s1.displayInfo();      // display information of s1

    student s2("Maria", 20, 202, 3.2);  // create second student using parameterized constructor
    s2.displayInfo();                    // display information of s2

    student s3("Umer",21, 203, 2.8);     // create third student using parameterized constructor
    s3.displayInfo();                    // display information of s3

    cout << "Program finished. Objects will now be deleted.\n";  // message before program ends

    return 0;  // end of program
}
