// Learning C++ 
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

using namespace std;

int main(){
    int fahrenheit(100);
    int celsius;

    celsius = (5.0/9) * (fahrenheit - 32);

    cout << "fahrenheit: " << fahrenheit << endl;
    cout << "celsius   : " << celsius << endl;

    float weight = 11.22;

    cout << endl;
    cout << "float          : " << weight << endl;
    cout << "integer        : " << (int) weight << endl;
    cout << "fractional part: " << (int)((weight - (int) weight) * 1000) << endl;
    
    cout << endl << endl;
    return (0);
}
