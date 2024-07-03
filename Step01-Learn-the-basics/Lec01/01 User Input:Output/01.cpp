/*
1  User Input/Output
1.1 Including Libraries
1.2 The Generic Skeleton
1.3 Output with cout
1.4 using namespace std
1.5 Taking User Input using cin

1.1 Including Libraries
- Libraries provide pre-built functions and tools for us to use in our code

1.2 The Generic Skeleton
library inclusion and the main function. 
Inclusion of libraires int main(){} - this is the entry point for you program

1.3 Output with cout
- used to display things in console
- cout << << - this is built in funciton from iostream library!
- strings are displayed using " "
- new line character \n or endl
- \n - is efficient and faster as it is simple and it inserts a new line character which is low-level-operation that directly moves the coursor to the beginning og the next line in the output.
   endl - not only adds newline char but also flushes the output buffer which can be costly operation especially while printing large amount of text

1.4 using namespace std
- at the begining of the program we are telling the program to use all the names from std namespaces
- useful shortcut makes code more readable and reduces clutter
- for complex c++ projects using it causually may cause naming conflicts

1.5 Taking User Input using cin
- cin >> stream allows to receive input via terminal

*/
// outputs in cpp
#include <iostream>
using namespace std;

int main(){
    //sinle line comments 
    /*multi
    line 
    comments
    */
    //cout used for displaying the data in terminal
    //is namspace std is not used we would require to write std:: everytime while using the cout and cin statements
    cout<<"Hello";
    cout<<"world";//Helloworld will appear on same line
    cout<<"Hello\n";
    cout<<"World\n";
    cout<<"Hello,World!"<<"\n";
    cout<<"Used for displaying texts!"<<endl;//endl or \n used to skip the cursor to next new line these are called new line character
    cout<<"Multiple cout for displaying multiple lines of texts\n";

    int x;
    cin>>x;
    cout<<"Value of x : "<<x<<endl;

    return 0;
}