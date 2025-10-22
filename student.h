#include <iostream>  // for input and output
using namespace std; // standard namespace

    class student {
    private:
        string name;   // student name
        int age;       // student age
        int rollno;    // student roll number
        float gpa;     // student GPA
    public:
        student();  // default constructor

        student(string n, int a, int r, float g);  // parameterized constructor

        ~student();  // destructor

        void setname(string n);  // setter for name
        void setage(int a);      // setter for age
        void setrollno(int r);   // setter for roll number
        void setgpa(float g);    // setter for GPA

        string getName();  // getter for name
        int getAge();      // getter for age
        int getRollNo();   // getter for roll number
        float getGPA();    // getter for GPA

        void displayInfo();  // function to display student info

        char calculateGrade();  // function to calculate grade based on GPA
    };
