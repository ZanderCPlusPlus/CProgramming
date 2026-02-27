#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>

class Student{
    std::string name;
    double gpa;

    static int total_students; //static variable (class variable) will represent how many total instances of the class exist.
    static int next_id; // generate unique student id.
    std::string id;
    static double goodGPA; // graduation requirement.

public:
Student(const std::string& n, double g) : name(n), gpa(g){
    total_students++; // increment the total number of students.
    id = "U0000" + std::to_string(next_id);
    next_id+=5;
}
// get function
static int getTotalStudents();

void print() const;
bool canGraduate() const;

//set methods.
static void setGraduationRequirement(double newGPA); // new GPA should be from 2.0 to 4.0 inclusively.
};

#endif