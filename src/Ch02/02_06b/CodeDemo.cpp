// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstdint>

#define CAPACITY 5000
//#define DEBUG 

using namespace std;

int main(){
    
    int32_t large = CAPACITY;
    uint8_t small = 35;
#ifdef DEBUG
    cout << "[performing addition]" << endl;
#endif
    large += small;

    cout << "large = " << large << endl;

    cout << endl << endl;
    return (0);
}
