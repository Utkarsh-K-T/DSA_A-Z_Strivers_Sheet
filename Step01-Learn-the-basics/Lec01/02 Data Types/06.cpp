/*
6) Typedef Declartion
typedef: typedef T
*/

#include <iostream>
using namespace std;

// Typedef - Creates an alias for another data type
// Define a typedef for 'int'
typedef int myInt;

int main() 
{
    // Declare variables using the typedef name
    myInt num1 = 10;
    myInt num2 = 20;

    // Perform some operations
    myInt sum = num1 + num2;

    // Output the result
    cout<< "Sum: " << sum <<endl;

    return 0;
}
