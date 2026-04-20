#include <iostream>

class Character {
public:
Character(int hp=100) : hp(hp){
    std::cout << "Character's constructor\n";
}

// protected:
int hp;

private:

};

class Elf : virtual public Character{
public:
Elf(){
    std::cout << "I am an Elf!\n";
}

void think(){
    std::cout << "Let's not fight!\n";
}

private:

};

class Warrior : virtual public Character {
public:
Warrior(){
    std::cout << "I am a Warrior\n";
}
void fight(){
    std::cout << "Slash!!!\n";
}

private:

};

class ElfWarrior : public Elf, public Warrior {
public:
ElfWarrior(int hp) : Character(hp) {

}

private:

};

int main(void){
    ElfWarrior elfi(150);

    elfi.fight();
    elfi.think();

    // std::cout << elfi.Warrior::hp << std::endl; // since Elf has two hps. This is called a diamond problem.
    std::cout << elfi.hp << std::endl; // the virtual inheritance fixed the problem.


    return 0;
}