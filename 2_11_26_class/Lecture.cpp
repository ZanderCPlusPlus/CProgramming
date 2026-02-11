#include <iostream>
#include <string>

// create a description of Lecture structure
typedef struct {
    std::string title;
    int duration;
} Lecture; // created a new structure called Lecture. Kind of a blueprint for creating objects with those characteristics.

// create a function which takes a Lecture structure as input
void printLecture(const Lecture& lecture){ // make alias instead of copying and since we aren't modifying, we make it constant.
    std::cout << "Title:\t\t" << lecture.title << std::endl;
    std::cout << "Duration:\t" << lecture.duration << std::endl;
}

int main(void){
    //create an object of Lecture structure.
    Lecture oop_lecture; // this is an object of the lecture structure Lecture.

    // access the properties (attributes, data members) of Lecture object oop_lecture.

    oop_lecture.title = "Class and Objects";
    oop_lecture.duration = 60*50; // number of seconds the lecture lasts.
    printLecture(oop_lecture);
    return 0;
}