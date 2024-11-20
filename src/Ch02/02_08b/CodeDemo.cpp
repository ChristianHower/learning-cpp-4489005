// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>

#define LENGTH 3

using namespace std;

int main(){
    const int SIZE = 4;
    int age[SIZE];
    float temps[] = {31.5, 32.7, 39.9};

    age[0] = 10;
    age[1] = 18;
    age[2] = 35;
    age[3] = 67;

    cout << "The Age array has " << SIZE << " elements." << endl;
    for (int i = 0; i < SIZE; i++){
        cout << "Age #" << i+1 << ": " << age[i] << endl;
    }
    cout << endl;

    cout << "The Temperature array has " << LENGTH << " elements." << endl;
    for (int i = 0; i < LENGTH; i++){
        cout << "Temperature #" << i+1 << ": " << temps[i] << endl;
    }

    cout << endl << endl;
    return (0);
}
