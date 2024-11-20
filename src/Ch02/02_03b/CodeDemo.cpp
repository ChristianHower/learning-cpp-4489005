// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>

using namespace std;

int a, b = 10;

int main(){
    bool my_flag;
    a = 7;
    my_flag = false;

    cout << "My Flag = " << my_flag << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl << endl;

    my_flag = true;
    cout << "My Flag = " << my_flag << endl;
    cout << "a + b = " << a + b << endl;
    cout << "b - a = " << b - a << endl << endl;

    unsigned int positive;
    positive = a - b;
    cout << "a - b = " << a - b << endl;
    cout << "a - b (unsigned) = " << positive << endl;
    
    cout << endl << endl;
    return (0);
}
