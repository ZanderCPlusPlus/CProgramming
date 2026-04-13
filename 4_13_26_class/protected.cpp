#include <iostream>
#include <string>

class A{
public:
std::string msg1 = "Message one!"; //some older versions of c++ won't let you initialize like this, so be careful.
private:
std::string msg2 = "Message two!";
protected:
std::string msg3 = "Message three!";

};

class B : public A{
public:
    void method() const{
        std::cout << msg1 << std::endl; // public ok,
        // std::cout << msg2 << std::endl; // private no access,
        std::cout << msg3 << std::endl; // protected ok.
    }
};

int main(void){
    B b;
    b.method();
    return 0;
}