/*
8) decltype Type Specifier
decltype(expr): decltype T
*/

#include <iostream>
using namespace std;

int main() {
    int x = 5;
    double y = 3.14;

    // decltype -  Queries the type of an expression
    // Using decltype to deduce variable types
    decltype(x) newX;// Declares a variable of the same type as x
    decltype(y) newY;// Declares a variable of the same type as y

    newX = 10;// Assigning a value to newX
    newY = 4.2;// Assigning a value to newY

    cout << "newX: " << newX << ", type: " << typeid(newX).name() <<endl;
    cout << "newY: " << newY << ", type: " << typeid(newY).name() <<endl;

    // Using decltype with expressions
    int array[] = {1, 2, 3, 4, 5};
    decltype(array[0]) element = array[0];// Deduces the type of element as int

    cout << "Element at index 0 of the array: " << element <<endl;

    return 0;
}
