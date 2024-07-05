/*
What are Arrays and Strings?
1)Basics of Arrays
2)Basics of Strings

1) Basics of Arrays
is a collection of elements of the same type stored in contiguous memory locations. 
It is a fixed-size data structure, meaning its size must be specified at the time of declaration and cannot be changed dynamically.
It is stored in consitive manner at random position in memory.
Types of Arrays 
- One-Dimensional Array: A simple array where elements are stored in a single line.
- Multi-Dimensional Array: An array of arrays, where elements are stored in a matrix form, such as two-dimensional arrays.
first elemment has index 0 and last element has index n-1
arrays have zero based indexing

2) Basics of Strings
is a sequence of characters.
handled in two main ways: using C-style strings or using the std::string class from the C++ Standard Library.
Types of Strings
- C-style Strings: These are arrays of characters ending with a null character ('\0').
- C++ Strings (std::string): These are part of the C++ Standard Library and provide more functionality and ease of use compared to C-style strings.
every char is stored at an index, and indexint starts from 0
string.size() or string.lengtth()

*/

#include<iostream>
using namespace std;

int main()
{
    cout<<"Arrays"<<endl;
    // One dimensional array
    int arr[5] = {10, 20, 30, 40, 50}; // Declaration and initialization
    for(int i = 0; i < 5; i++) 
    {
        cout << arr[i] << " "; // Accessing elements
    }
    cout<<endl;
    // Two dimensional array
    int arr2d[2][3];// Declaration
    arr2d[1][3] = 369;// initialization
    cout<<"arr2d (1,3): "<<arr2d[1][3]<<endl;

    cout<<"\nStrings\n";
    //C-style String
    char str[] = "Hello, World!"; // Declaration and initialization
    cout << str << endl; // Accessing the string
    //C++ String
    string str1 = "Hello, C++!"; // Declaration and initialization
    cout << str1 << endl; // Accessing the string
    // Various operations with std::string
    string str2 = " How are you?";
    string concatenated = str1 + str2; // Concatenation
    cout << concatenated << endl;
    cout << "Length of str1: " << str1.length() << endl; // Length of the string
    if (str1.find("C++") != string::npos) 
    { // Finding a substring
        cout << "Found 'C++' in the string." << endl;
    }
    cout<<"str1[0]: "<<str1[0]<<endl;

    return 0;
}