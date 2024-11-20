// Learning C++ 
// Exercise 02_12
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

using namespace std;

enum class cow_purpose {dairy, meat, hide, pet};
enum class grocery_section {canned, frozen, meat, laundry, dairy, bakery};

int main(){
    cow_purpose a;

    a = cow_purpose::meat;

    cout << "a = " << (int) a << endl;

    cout << endl << endl;
    return (0);
}
