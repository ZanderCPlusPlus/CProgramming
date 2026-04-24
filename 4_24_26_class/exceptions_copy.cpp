#include <iostream>
#include <stdexcept>
#include <string>

class MyException : public std::logic_error {
public:
MyException(int code, const std::string& message) : std::logic_error(message), err_code(code){

}
int getErrCode() const{
    return err_code;
}

const char* what() const noexcept override {
    //the method never throws an exception.
    //need to ensure the message can leave the scope of this method.
    std::string* out = new std::string("The error code is ");
    out->append(std::to_string(getErrCode()));
    out->append(std::string("\n"));
    out->append(logic_error::what());
    return  out->c_str(); // returns the string as an array of characters.
}

private:
int err_code;
};

class Fraction {
public:
Fraction(int n=1, int d=1) : num(n), den(d){

}

int quotient() const{
    if(den == 0){
        // throw "Denominator cannot be zero";
        throw std::runtime_error("Denominator cannot be zero");
    }
//     else if(num > 99){
//     throw 1;
// }

// throw 2.3;
// if the fraction is negative throw logic_error.
if((num < 0 && den > 0) || (num>0 && den < 0)){
    throw std::logic_error("The fraction cannot be negative");
}
if(num/den>100){
    throw MyException(11,"quotient cannot be greater than 100"); // memory leak is not covered yet. We would need to create a destructor.
}
    return num/den;
}

private:
int num, den; // numerator and denominator.
};

int main(void){
    int n1, n2;
    std::cout << "Enter 2 integers: ";
    std::cin >> n1 >> n2;
    Fraction frac(n1,n2);

    try {
        std::cout << frac.quotient() << std::endl;
        std::cout << "End of try block\n";
    }
    // catch(const char* ex){
    //     std::cout << "Char pointer exception was caught: " << ex << std::endl;
    // }
    // catch(const int ex){
    //     std::cout << "Int exception was caught with the code: " << ex << std::endl;
    // }
    catch(const MyException& ex){
        std::cout << "MyException exception was caught: " << ex.what() << std::endl;
    }
    catch(const std::logic_error& ex){
        std::cout << "logic error exception was caught: " << ex.what() << std::endl;
    }
    catch(const int ex){
        std::cout << "Int exception was caught with the code: " << ex << std::endl;
    }
    // catch(...){
    //     std::cout << "templates\n";
    // }
    catch(const std::exception& ex){
        std::cout << "other exception: " << ex.what() << "\n";
    }
    std::cout << "End of program" << std::endl;
    return 0;
}