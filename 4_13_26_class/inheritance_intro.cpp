#include <iostream>
#include<string>

class Human{
public:
    Human(){
        std::cout << "Human constructor" << this << std::endl;
    }
    ~Human(){
        std::cout << "Human destructor" << this << std::endl;
    }
    std::string name; // if these were private, we'd need the accessor and set functions for the Student class to access them.
    int age;

    Human(const std::string& n, int a) : name(n), age(a){

    }
    void printInfo() const{
        std::cout << "My name is " << name << std::endl;
        std::cout << "I am " << age << " years old" << std::endl;
    }
private:

};

class Student : public Human{ // the Student class is a derived class from the base class Human.
public:
Student(){
        std::cout << "Student constructor" << this << std::endl;
    }
    ~Student(){
        std::cout << "Student destructor" << this << std::endl;
    }
    Student(const std::string& n, int a, double g) : Human(n,a){ // now the student constructor is only responsible for the student-sepcific properties, and the human constructor responsible for all the human stuff.
        // name = n;
        // age = a;
        gpa=g;
    }
// std::string name;
// int age;
double gpa;

//redefine the base class method printInfo in the derived class.
void printInfo() const{
    Human::printInfo(); // call the method of the base class.
    std::cout << "I am a student and my GPA is " << gpa << std::endl;
}

private:

};

int main(void){
    Human person;
    person.name = "John";
    person.age= 25;
    person.printInfo();

    Student stu("Stu", 20, 3.4);
    // stu.name = "Stu";
    // stu.age=20;
    // stu.gpa=3.4;
    stu.printInfo();

    return 0;
}