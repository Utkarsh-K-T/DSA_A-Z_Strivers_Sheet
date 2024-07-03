/*
Basic Data types in cpp
- defines the kind of value a variable can hold and the operations that can be performed on it

1) Primitive Types
Integer Types: int 4 bytes, short 2 bytes, long 4 or 8 bytes, long long 8 bytes
Floating Point Types: float 4 bytes, double 8 bytes, long double 8 or 12 bytes
Character Types : char 1 byte, wchar_t variable size depending upon the type.
Boolean Type : bool 1 byte

2) Derived Types 
Array Types : T[] array of type T
Pointer Types : T* pointer to type T
Refrence Types : T& refrence to type T
functions : T functionName()

3) User Defined Types
Structures : struct
Classes : class
Union : union

4) Enumeration Types
Enum : enum

5) Void Type
void: void T

6) Typedef Declartion
typedef: typedef T

7) Auto Type
auto: auto T

8) decltype Type Specifier
decltype(expr): decltype T
*/
#include <iostream>
#include <codecvt>
#include <locale>

using namespace std;

#include <codecvt>
#include <locale>

int main(){
    //1) Primitive Types
    //Integer Types
    int x = 10;
    short y = 5;
    long z = 1234567890;
    long long w = 1234567890123456789;
    cout<<"Integer Types:"<<endl;
    cout<<"int : "<<x<<endl<<"short : "<<y<<endl<<"long : "<<z<<endl<<"long long : "<<w<<endl;
    cout<<endl;

    //Floating Point Types
    float a = 3.14f;
    double b = 3.14159265358979;
    long double c = 3.14159265358979323846L;
    cout<<"Floating Types:"<<endl;
    cout<<"float : "<<a<<endl<<"double : "<<b<<endl<<"long double : "<<c<<endl;
    cout<<endl;

    // Character Types
    char ch = 'A';
    wchar_t wch = L'@'; // Unicode character
    // char16_t unicodeChar= u'あ'; //(UTF-16 character) 16 bits
    // char32_t anotherUnicodeChar = U'🫠';// (UTF-32 character) 32 bits
    cout<<"Character Types:"<<endl;
    cout<<"char : "<<ch<<endl<<"wchar_t : "<<wch<<endl;//<<"char16_t : "<<hex<<unicodeChar<<endl<<"char32_t : "<<hex<<anotherUnicodeChar<<endl;
    cout<<endl;

    // Boolean Type
    bool flag = true;
    cout<<"Boolean Type:"<<endl;
    cout<<"bool : "<<flag<<endl;
    cout<<endl;
    
    return 0;
}
