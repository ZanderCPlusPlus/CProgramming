#include <iostream>
#include <string>
#include <vector>

//template class
template <typename T1 = int, typename T2 = double> // Default template parameters can be defined this way.
class Pair{
public:
    //constructor
    Pair(const T1& f, const T2& s) : first(f), second(s) {

    }

    //getters
    const T1& getFirst() const{ // returns a constant T1 reference to be memory efficient and prevent modification.
        return first;
    }
    const T2& getSecond() const{ // returns a constant T2 reference to be memory efficient and prevent modification.
        return second;
    }

    //setters
    void setFirst(const T1& first){
        this->first = first;
    }
    void setSecond(const T2& second){
        this->second = second;
    }
    //print method
    void print() const{
        std::cout << "(" << getFirst() << ", " << getSecond() << ")" << std::endl;
    }
private:
    T1 first;
    T2 second;
};

// create a function that takes 2 arguments of any type
// returns the Pair of those objects.
template <typename T1, typename T2>
Pair<T1, T2> createPair(const T1& v1, const T2& v2){ // cannot return as a reference because the Pair created by the function only exists within the scope of the function.
    return Pair<T1, T2>(v1, v2);
}

int main(void){
    // create a pair object;
    Pair<int, double> p1(1,1.3); // note that we needed to specify what the template =data types were.
    p1.print();

    Pair<std::string, char> p2=createPair(std::string("hello"), '!');
    p2.print();

    //use the keyword 'auto' to create the variable type automatically.
    auto x=1; // automatically assigned as an integer.
    auto p3 = createPair('a', 1); // p3 automatically created as type Pair.
    p3.print();

    Pair p4(12, 12.4);
    p4.print();

    // std::vector<int> v {1,2};
    // Pair<std::vector<int>, double> p5(v,3.4);
    // p5.print();

    return 0;
}