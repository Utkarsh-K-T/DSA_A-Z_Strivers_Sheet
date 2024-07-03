/*
5) Void Type
void: void T
*/

#include <iostream>

// Function declaration with void return type and no parameters
void greet() 
{
    std::cout << "Hello, World!" << std::endl;
}

int main() {
    // Calling the greet function
    greet(); // This function doesn't return anything
    return 0;
}
