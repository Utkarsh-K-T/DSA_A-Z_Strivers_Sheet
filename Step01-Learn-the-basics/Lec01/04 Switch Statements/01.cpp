/*
Switch Case Statements
1) swtich cases and if else
2) default case

1) swtich cases and if else
when we have a single variable to compare against multiple distinct values we use swtich case
if-else: for handlinge statements with complex conditions
switch statements: simplifying cases with multiple exact matches (simple conditions which are dependent on a single variable)

2) The switch case 
Generic skeleton:
switch (expression)
{
    case constant-expression:
        (case1 body);
        break;
    .
    .
    .
    default:
        (default case body);
}
Default case: none of the cases match the expression, the code inside the default block will execute (safety net)
Requirement for a Constant Expression: expression results in a constant value (can include constants & arithmetic expressions)
Limited to Integer or Character Types: designed to handle integer or character values
Significance of the 'Break' Keyword: It serves as an exit mechanism from the switch statement.
Optional Default Case: default case is optional
Prohibition of Duplicate Case Values: duplicates of case values are disallowed within a switch
Potential for Nested Switch Statements: possible to nest one switch statement inside another in C++, but its not suggested as it increases complexities in reading the code
*/
#include <iostream>
using namespace std;

int main()
{
    int d = 0;
    cout<<"Enter day no.(1-7): ";
    cin>>d;
    switch (d)
    {
    case 1://using constant int
        cout<<"Sunday"<<endl;
        break;
    case 2:
        cout<<"Monday"<<endl;
        break;
    case 3:
        cout<<"Tuesday"<<endl;
        break;
    case 4:
        cout<<"Wednesday"<<endl;
        break;
    case 5:
        cout<<"Thursday"<<endl;
        break;
    case 6:
        cout<<"Friday"<<endl;
        break;
    case 7:
        cout<<"Saturday"<<endl;
        break;
    default:
        cout<<"Invalid Input"<<endl;
        break;// not necessary to add break to default case!
    }

    const int x = 10;
    const int y = 20;
    switch (x+y)//expression results in a constant value
    {
        case 10:
            cout<<"Result is 10"<<endl;
            break;
        case 30:
            cout<<"Result is 30"<<endl;
            break;
        default:
            cout<<"No match found"<<endl;
    }

    char g = 'A';
    switch(g)//designed to handle integer or character values
    {
        case 'A':
            cout<<"Excellent"<<endl;
            break;
        case 'B':
            cout<<"Very Good"<<endl;
            break;
        default:
            cout<<"Invalid grade"<<endl;
    }

    //nested switch cases
    int a = 2;
    int b = 3;
    switch(a)
    {
        case 1:
            cout<<"a is 1"<<endl;
            switch(b)
            {
                case 1:
                    cout<<"b is 1"<<endl;
                    break;
                case 2:
                    cout<<"b is 2"<<endl;
                    break;
                case 3:
                    cout<<"b is 3"<<endl;
                    break;
                default:
                    cout<<"b is not 1"<<endl;
            }
            break;

        case 2:
            cout<<"a is 2"<<endl;
            switch(b)
            {
                case 1:
                    cout<<"b is 1"<<endl;
                    break;
                case 2:
                    cout<<"b is 2"<<endl;
                    break;
                case 3:
                    cout<<"b is 3"<<endl;
                    break;
                default:
                    cout<<"b is not 1"<<endl;
            }
            break;

        default:
            cout<<"Invalid values of a and b";
    }
    return 0;
}