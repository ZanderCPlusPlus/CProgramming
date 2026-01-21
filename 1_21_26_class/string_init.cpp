#include <iostream>
#include <string>

int main(void){
    //initialize string
    std::string str1("this is first string");

    //initialize the string with another string
    std::string str2(str1);

    //initialize the string with character and number of occurrence
    std::string str3(100,'?');

    //initialize the string as part of another string
    std::string str4(str1,14, 6); // 14 start index, and 6 characters to take

    std::cout << str4 << std::endl;
    std::cout << str3 << std::endl;
    if(str1 == str2){
        std::cout << str4 + str1 << std::endl;
    }
    std::cout << str4.size() << std::endl;

    return 0;
}