#include <iostream>

class Fraction {
public:
Fraction(int n=1, int d=1) : num(n), den(d){

}

int quotient() const{
    if(den == 0){
        throw "Denominator cannot be zero";
    }
    else if(num > 99){
    throw 1;
}
throw 2.3;
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
    catch(const char* ex){
        std::cout << "Char pointer exception was caught: " << ex << std::endl;
    }
    catch(const int ex){
        std::cout << "Int exception was caught with the code: " << ex << std::endl;
    }
    catch(...){
        std::cout << "templates\n";
    }
    std::cout << "End of program" << std::endl;
    return 0;
}