// Learning C++ 
// Exercise 02_09
// Strings, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
    const size_t LENGTH1 = 25;
    char array_str1[LENGTH1] = "lemon lime ";
    char array_str2[] = "and salt rim";

    string std_str1 = "peppermint chocolate ";
    string std_str2 = "and sugar rim";

    strncat(array_str1, array_str2, LENGTH1);
    cout << array_str1 << endl;
    cout << std_str1 + std_str2 << endl;
    
    cout << endl << endl;
    return (0);
}
