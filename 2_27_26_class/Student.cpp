#include <string>
#include <iostream>
#include "Student.hpp"

//cannot initialize the static variable inside the class. Must do it here.
int Student::total_students = 0; // initialize the static data member (required).
int Student::next_id = 1000;
double Student::goodGPA = 2.5;

int Student::getTotalStudents(){
    return total_students;
}

void Student::print() const{
    std::cout << "\n";
    std::cout << "ID: " << id << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "GPA: " << gpa << std::endl;
    std::cout << "Can graduate: " << (canGraduate() ? "YES" : "NO") << std::endl;
    std::cout << "\n";
}

void Student::setGraduationRequirement(double newGPA){
    goodGPA = (newGPA <= 4.0 && newGPA >= 2.0) ? newGPA : goodGPA;
}

bool Student::canGraduate() const{
    return ((gpa >= goodGPA) ? 1 : 0);
}