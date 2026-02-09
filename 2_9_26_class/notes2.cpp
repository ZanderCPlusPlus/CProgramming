void printLecture(const std::string& title, int duration){

}

void printCourse(const std::vector<std::string>& titles, const std::vector<int>& durations){

}

// as the number lecture parameters becomes too large, it will be a headache to update the parameters printCourse function

struct Lecture{
    std::string title;
    int duration;
}
void print(const struct Lecture& lecture){
    std::cout << lecture.duration << std::endl;
    std::cout << lecture.title << std::endl;
}