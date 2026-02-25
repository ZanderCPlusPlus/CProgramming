#include <string>
#include <iostream>
class Student{
public:
std::string name;
double gpa;

static int total_students; //static variable (class variable) will represent how many total instances of the class exist.
Student(const std::string& n, double g) : name(n), gpa(g){
    total_students++; // increment the total number of students.
}
};

//cannot initialize the static variable inside the class. Must do it here.
int Student::total_students = 0; // initialize the static data member (required).

int main(void){
    // print total number of students.
    std::cout << "Total stuydents " << Student::total_students << std::endl;
    Student("Mark", 3.4); // anonymous object. It isn't assigned anywhere.
    Student("Anna", 3.0);
    std::cout << "Total stuydents " << Student::total_students << std::endl;

    // we don't really have two students though because we cannot access the two students we created.
    //we need a destructor method that subtracts from total_student when we lose objects.
    return 0;
}