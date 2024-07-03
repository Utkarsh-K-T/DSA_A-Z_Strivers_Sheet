/*
2) Derived Types : 
Array Types : T[] array of type T
Pointer Types : T* pointer to type T
Refrence Types : T& refrence to type T
functions : T functionName()
*/

#include<iostream>
using namespace std;

//Function Types
int sumTwo(int a, int b)
{
    return a+b;
}

int main(){
    //Array Types - A collection of elements of the same type
    cout<<"Arrays"<<endl;
    int numbers[5] = {1,2,3,4,5};
    char name[] = "UtkarshKT";
    char initials[3] = {'U','K','T'};
    cout<<"int array : "<<numbers[0]<<endl;
    cout<<"int array : "<<numbers<<endl;//dispalys complete array - numbers
    /*
    we are effectively passing the address of the first element (&numbers[0]) to cout. 
    Therefore, cout interprets it as a pointer to an integer (int*) and prints the memory address (in hexadecimal format) where the array starts.
    so it displays : int array : 0x16bbc6de0
    */
    cout<<"int array : ";
    for(int i=0; i<5; i++)
    {
        cout<<numbers[i]<<" ";
    }
    cout<<endl;
    cout<<"char array : "<<name<<endl;//dispalys complete array - name
    /*
    it assumes that it is dealing with a null-terminated string (C-style string). 
    It then prints characters from the starting memory address (&name[0]) until it encounters the null character ('\0'). 
    This behavior is specific to C-style strings and does not apply to arrays of other types like int[].
    so it displays - char array : UtkarshKT
    */
    cout<<"char array : "<<initials<<endl;//dispalys complete array - initials
    cout<<"char array : ";
    for(auto i: initials)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<endl;

    //Pointer Types - Holds the memory address of another variable ( signpost or a note that tells you where something is located rather than the thing itself)
    cout<<"Pointers Types"<<endl;
    int age = 21;
    int* ptr = &age;
    char* strPtr = "Hello";
    string str = "Hello";
    string* sptr = &str;
    cout << "ptr: " << *ptr <<endl;
    cout << "address of ptr - "<< ptr <<endl;
    cout << "strPtr: " << strPtr <<endl;
    cout <<"address of strPtr: "<< strPtr <<endl;
    /*
    Does not displays address of strPtr
    In char it points to a sequence of characters in memory, typically representing a C-style string (null-terminated sequence of characters)
    Where as in int can display the address of the pointer itself using just the pointer variable name (e.g., ptr) because ptr holds the memory address where the int variable resides. This is because the size and type of int are well-defined in C++ and are usually a fixed size (typically 4 bytes on most systems).
    To display address of char it is done by casting the pointer to const void*, which is the appropriate type for displaying memory addresses with std::cout.
    */
    cout << "address of strPtr: "<<  static_cast<const void*>(&strPtr) << endl;
    cout<<str<<endl;
    cout<<"address of sptr: "<<sptr<<endl;
    cout<<endl;

    //Refrence Types - An alias for another variable (another name for an already existing variable / giving a variable a nickname that you can use interchangeably with its original name)
    cout<<"Refrence Types"<<endl;
    int& ref = age;
    cout<<"ref : "<<ref<<endl;
    cout<<endl;

    //Function Types - A block of code that performs a specific task
    cout<<"Function Types"<<endl;
    int a = 3;
    int b = 6;
    cout<<"function sumTwo() : "<<sumTwo(a,b)<<endl;
    cout<<endl;

    return 0;
}