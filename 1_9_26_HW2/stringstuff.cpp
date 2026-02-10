#include <iostream>
#include <vector>
#include <string>

std::string my_join(const std::vector<std::string> words, const std::string& separ);
int main(void){
    std::cout << "Enter strings (\"exit\" to stop)\n";
    std::vector<std::string> v;
    std::string temp;
    int count = 0; // initialize a counter j.
    while(temp != "exit"){ // a loop that runs getline to get all the words.
        std::getline(std::cin, temp); // store in temporary string.
        v.push_back(temp); // add temp to the end of the string vector.
    }
    std::cout << "Enter the separator\n";
    std::getline(std::cin, temp); // get the separator.
    //v.push_back(temp);
    std::cout << my_join(v,temp) << "\n"; // print the sum of the words and separators.
    
    return 0;
}
std::string my_join(const std::vector<std::string> words, const std::string& separ){
    int size = words.size(); // get the size
    std::string sum = ""; // initialize a string sum.
    for(int i = 0; i < size-1; i++){ // for loop that adds up the strings and separators.
        sum+=words[i];
        if(i != size-2){ // prevents adding the separator at the end.
            sum+=separ;
        }
    }
    return sum; // return the total string.
}