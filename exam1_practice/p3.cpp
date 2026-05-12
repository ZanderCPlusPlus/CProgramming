#include <iostream>
#include <vector>

void rotateleft(std::vector<int>& p);
void rotateleftm(std::vector<int>& p, int n);
void print(const std::vector<int>& v); // pass by reference to avoid creating a copy awhich saves space.
int main(void){
    //std::vector<int> v;
    std::vector<int> v2 = {1,2,3,4,5,6};
    rotateleft(v2);
    print(v2);
    rotateleftm(v2,4);
    print(v2);
    return 0;
}
void rotateleft(std::vector<int>& p){
    int size=p.size();
    //std::cout << p.size() << std::endl;
    p.insert(p.begin(), p[size-1]);
    p.erase(p.end());
}
void print(const std::vector<int>& v){
    for (int i = 0; i < v.size(); i++){
        std::cout << v[i] << " ";
    }
    std::cout << "\n";
}
void rotateleftm(std::vector<int>& p, int n){
    if(n == 0){
        return;
    }
    rotateleft(p);
    rotateleftm(p,n-1);
}

// v.pop_back() // remove the last element.
// v.push_back(10) // adds 10 to the end of the vector.