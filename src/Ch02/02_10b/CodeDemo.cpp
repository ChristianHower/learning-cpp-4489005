// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

using namespace std;

int main(){
    float flt;
    int32_t sgn;
    uint32_t unsgn;

    flt = -8.45;
    sgn = flt;
    unsgn = sgn;

    cout << "float: " << flt << endl;
    cout << "signed int: " << sgn << endl;
    cout << "unsigned int: " << (int32_t) unsgn << endl;
    
    cout << endl << endl;
    return (0);
}
