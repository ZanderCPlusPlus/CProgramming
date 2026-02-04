#include <iostream>
#include <vector> // vector data structure (dynamic array)

void print(const std::vector<int>& v); // pass by reference to avoid creating a copy awhich saves space.
int main(void){
    //create a vector. It's a template class so it can hold all sorts of data types
    std::vector<int> v; // empty vector of integers.

    // create and initialize the vector.
    std::vector<int> v2 {1,2,3,4,5,6};

    print(v2);

    // use another constructor. Provide the size and the default value.

    std::vector<int> v3(5,9); // a vector of 5 elements each set to 9.
    print(v3);

    //copy from another vector.
    std::vector<int> v4(v2);
    print(v4);

    // get the number of elements.

    std::cout << "v2 size: " << v2.size() << std::endl;
    std::cout << "v2 size: " << v.size() << std::endl;

    //first and last elements
    std::cout << "v2 first: " << v2.front() << std::endl;
    std::cout << "v2 back: " << v2.back() << std::endl;

    // add to the end of a vector.
    v2.push_back(10);
    print(v2);

    //remove the last element.
    v3.pop_back();

    //iterators -- objects that point to certain locations in the vector.
    //begin() -- points to the first element in the vector.
    // end() -- points to the one past the last element.

    std::cout << *v2.begin() << std::endl; // prints the location of the 1st element.

    //insert(location (iterator), value)
    v2.insert(v2.begin()+1,1000);
    print(v2);

    v2.insert(v2.begin()+5+1,1000); // inserts between the 5 and the 6 in the vector.
    print(v2);

    return 0;
}

void print(const std::vector<int>& v){
    for (int i = 0; i < v.size(); i++){
        std::cout << v[i] << " ";
    }
    std::cout << "\n";
}