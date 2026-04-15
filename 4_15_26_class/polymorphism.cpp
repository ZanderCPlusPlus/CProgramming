#include <iostream>

// Abstract class. Cannot create objects of this class.
class Weapon {
public:
    virtual void use() = 0; // maakes this an abstract function. Having at least one abstact function makes the class an abstract class.

private:

};

class Gun : public Weapon{
public:
    void use() override {
        std::cout << "BANG!" << std::endl;
    }
};

class MachineGun : public Gun {
public:
    MachineGun() : magazine(20) {

    }
    void use() override { // technically the keyword is not necessary, but it will throw syntax errors if we make mistakes. So, it is useful to have.
        while(magazine--){
            std::cout << "BANG ";
        }
        std::cout << "\n";
        magazine = 20;
    }

private:
    int magazine;
};

class Bazooka : public Gun {
public:
    void use() override {
        std::cout << "BOOM!" << std::endl;
    }

private:

};

class Knife : public Weapon {
public:
    void use() override {
        std::cout << "THROW KNIFE SKILLFULLY!" << std::endl;
        //could also call Gun::use() if we wanted to.
    }

private:


};

class Player {
public:
    void use(Weapon& weapon){
        weapon.use();
    }

private:

};

int main(void){
    Gun gun;
    MachineGun mg;

    std::cout << "Array\n";
    Gun* guns[2] = {&gun, &mg}; // switched to an array of pointers. This prevents the array from converting each element into simply the base class.

    for(int i = 0; i < 2; i++){
        guns[i]->use(); // this changed from . notation to -> notation.
    }

    std::cout << "Player\n";
    Player player;
    Bazooka bazooka;
    Knife knife;
    player.use(gun);
    player.use(mg);
    player.use(bazooka);
    player.use(knife);
    return 0;
}