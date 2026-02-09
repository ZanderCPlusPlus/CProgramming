#include <iostream>
using namespace std;
//char* pCity = &"Dallas";
int main(void){
    int num=42;
    float pi=3.14f;
    void* ptr;
    ptr=&num;
    cout << "Float value via void*: " << *(static_cast<int*>(ptr)) << endl;
    ptr=&pi;
    cout << "Float value via void*: " << *(static_cast<float*>(ptr)) << endl;
    /*cout << pCity << "\n";
    cout << *pCity << "\n";
    cout << *(pCity+1) << "\n";
    cout << *(pCity+2) << "\n";
    cout << *(pCity+3) << "\n";
    */
    return 0;
}