#include <iostream>
#include <random>

int f1(std::mt19937& eng){
    std::uniform_int_distribution<int> dist(1,6);

    return dist(eng);
}
void game(std::mt19937& eng, const int& sum);
int main(void){
    int seed;
    std::cout << "Enter the seed ";
    std::cin >> seed;

    //initialize a random number engine with a seed
    std::mt19937 eng(seed);

    //std::cout << "The random number is: " << f1(eng);
    int x = f1(eng); // first die roll.
    int y=f1(eng); // second die roll.
    int sum=x+y; // sum of the two.
    std::cout << "You rolled " << x <<" + " << y <<" = " << sum << "\n"; // printout.
    if(sum == 2 || sum == 3 || sum == 12){ // check if they lost on the first try.
        std::cout << "You lose\n";
    }
    else if (sum == 7){ // check if they won on the first time.
        std::cout << "You win\n";
    }
    else{game(eng, sum);} // otherwise, record the sum, the random engine, and pass onto the game function.
    return 0;
}
void game(std::mt19937& eng, const int& sum){ // take in the random engine and the original sum.
    int x = f1(eng); // reroll the first die.
    int y=f1(eng); // reroll the second die.
    int new_sum = x+y; // find the new sum.
    std::cout << "You rolled "<< x <<" + " << y <<" = " << new_sum << "\n"; // printout.
    if(new_sum == sum){ // check if they've won by rolling the original sum.
        std::cout << "You win\n";
    }
    else if(new_sum == 7){ // check if they've lost by rolling a 7 later in the game.
        std::cout << "You lose\n";
    }
    else{ // otherwise, continue the game by calling the game function again.
        game(eng, sum);
    }

    //I think it's clear that statistically this function will eventually hit the win or lose condition, terminating the recursion.
}