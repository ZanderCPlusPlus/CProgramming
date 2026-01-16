#include <iostream>
#include <string>

// function inside a namespace inside a namespace.
namespace Zander{
    namespace first{
        void f(){
            std::cout << "Zander" << std::endl;
        }
    }
}

int main(void){
    Zander::first::f(); //this is how you'd call it.
    int count;
    std::cin >> count;
    std::cout << "value is " << count << std::endl;
    return 0;
}