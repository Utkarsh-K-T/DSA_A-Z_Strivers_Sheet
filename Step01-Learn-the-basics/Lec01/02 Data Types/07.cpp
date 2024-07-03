/*
7) Auto Type
auto: auto T
*/

#include <iostream>
using namespace std;

#include <iostream>

int main() 
{
    // Auto - Automatically deduces the type of a variable
    // Initializing variables with auto keyword
    auto x = 5;                // x is deduced as int
    auto pi = 3.14159;         // pi is deduced as double
    auto name = "John";        // name is deduced as const char*

    // Displaying each variable
    cout << "x: " << x <<endl;
    cout << "pi: " << pi <<endl;
    cout << "name: " << name <<endl;

    // Using auto with arrays
    int array[] = {1, 2, 3, 4, 5};
    cout << "Array elements:";
    for (auto i : array) 
    {
        cout << " " << i;
    }
    cout << endl;

    return 0;
}
