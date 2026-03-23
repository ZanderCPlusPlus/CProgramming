#include <iostream>
#include <vector>
#include <string>

// create a template function prototype.
template <typename T>
T smallest(const T& n1, const T& n2, const T& n3);

template <typename T>
void print(const T& value);
void print(bool value);

// create a template function called findMax that returns a generic type, inputs a generic vector of generic type, and returns the max of the elements.
template <typename T>
T findMax(const std::vector<T>& v);

int main(void){
    // working on templates today.
    int i1 = 1, i2 = -4, i3=-7;
    //call the template function.
    std::cout << smallest(i1,i2,i3) << std::endl;

    double d1 = 1.4, d2 = -4.7, d3=-7.9;
    //call the template function.
    std::cout << smallest(d1,d2,d3) << std::endl;

    std::string s1 = "apple", s2 = "Banana", s3="peanut";
    //call the template function.
    std::cout << smallest(s1,s2,s3) << std::endl;

    // test the print functions.
    int num = 123;
    bool b=(1<2);
    print(num);
    print(b);

    //TODO test findMax with different vectors.
    std::vector<int> v {1,2,34,4};
    std::cout << findMax(v) << std::endl;
    return 0;
}
template <typename T>
T smallest(const T& n1, const T& n2, const T& n3){
    if(n1 <= n2 && n1 <= n3){
        return n1;
    }
    else if(n2 <= n3){
        return n2;
    }
    else{
        return n3;
    }
}

template <typename T>
void print(const T& value){
    std::cout << "Generic: " << value << std::endl;
}
//overload the template with a non-template to account for exceptions.
void print(bool value){
    std::cout << "Boolean: " << (value ? "True" : "False") << std::endl; // using the ternary operator.
}

template <typename T>
T findMax(const std::vector<T>& v){
    if(v.empty()){
        throw std::string("findMax: empty vector");
    }
    T max = 0;
    for(int i = 0; i < v.size()-1; i++){
        if(v[i] > v[i+1]){
            max=v[i];
        }
    }
    return max;
}