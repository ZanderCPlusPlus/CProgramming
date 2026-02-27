#include "Student.hpp"
#include <iostream>

int main(void){
    // print total number of students.
    std::cout << "Total stuydents " << Student::getTotalStudents() << std::endl;
    Student s1("Mark", 3.4); // anonymous object. It isn't assigned anywhere.
    Student s2("Anna", 3.0);
    std::cout << "Total stuydents " << Student::getTotalStudents() << std::endl;

    s1.print();
    s2.print();
    return 0;
}