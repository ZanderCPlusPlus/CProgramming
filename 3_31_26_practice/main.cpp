/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

class gib{
  public:
  gib(){
      t=100;
  }
  gib(int t){
      this->t=t;
  }
  void print() const{
    std::cout << t << "\n";
  }
  private:
  int t;
};

int main()
{
    // std::cout<<"Hello World";
    
    gib* p = new gib[2];//{gib(1), gib(0)};
    p[0] = gib(1);
    p[1] = gib(0);
    p[0].print();
    p[1].print();
    // gib p(2);
    // p.print();

    return 0;
}