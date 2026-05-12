#include <iostream>
#include <iomanip>

int main(void){
    std::cout << std::right << std::setw(10) << "456";
    std::cout << "3";
    std::cout << std::endl;
    std::cout << std::setw(2) << " ";
    std::cout << "1";
    std::cout << std::endl;

    std::cout << 9 % 10 << "\n";

    /*for(int n=1;n<=entry;n++){
        for(int i=1; i <= (entry-1)*4+2*entry-1; i++){
            std::cout << std::left << std::setw((entry-1)*2+entry-1);
            for(int j=entry; j <= n && j>=2 ; j--){
                std::cout << j << "  ";
            }
            std::cout << "1  ";
            std::cout << std::left << std::setw((entry-1)*2+entry-1);
            for(int k=2;k<=n;k++){
                std::cout << k << "  ";
            }
        }
    }
    for(int n=1;n<=entry;n++){
        for(int i=1; i <= (entry-1)*4+2*entry-1; i++){
            std::cout << std::left << std::setw((entry-1)*2+entry-1);
            for(int j=entry; j <= n && j>=2 ; j--){
                std::cout << j << "  ";
            }
            std::cout << "1  ";
            std::cout << std::left << std::setw((entry-1)*2+entry-1);
            for(int k=2;k<=n;k++){
                std::cout << k << "  ";
            }
        }
    }*/
    return 0;
}