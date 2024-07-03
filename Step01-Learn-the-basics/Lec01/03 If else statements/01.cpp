/*
If-Else Statements
1) The if-else statement
2) Simplifying Code with else-if

Conditional statements are a fundamental concept in programming that allows you to make decisions based on certain conditions, which help to enable specific blocks of code depending upon specific condidtions. 
1) The if-else statement
- 'if statement' is used to execute a block of code only if a certain condition is met, if condition is true then block executes.
- 'else statement' is option to if statement. It specifys what to execute when if statement is not met (is false)

2) Simplifying Code with else-if
- scenarios where we need to check multiple conditions. Instead of writing multiple independent if statements, we can streamline our code using else if statements.
*/
#include<iostream>
using namespace std;

int main()
{
    //1) The if-else statement
    int age = 0;
    cout<<"Enter your age: ";
    cin>>age;
    if(age>=18)//18,19,20....
    {
        cout<<"You are an adult."<<endl;
    }
    else //17,16,15,...,0
    {
        cout<<"You are not an adult."<<endl;
    }

    //2) Simplifying Code with else-if
    int mks = 0;
    cout<<"Enter your marks: ";
    cin>>mks;
    
    if (mks<25)
    {
        cout<<"Grade: F"<<endl;
    }
    else if (mks>=25 && mks<=44)
    {
        cout<<"Grade: E"<<endl;
    }
    else if (mks>=45 && mks<=49)
    {
        cout<<"Grade: D"<<endl;
    }
    else if (mks>=50 && mks<=59)
    {
        cout<<"Grade: C"<<endl;
    }
    else if (mks>=60 && mks<=69)
    {
        cout<<"Grade: B"<<endl;
    }
    else if (mks>=70 && mks<=100)
    {
        cout<<"Grade: A"<<endl;
    }
    else 
    {
        cout<<"Invalid marks entered."<<endl;
    }
    
    //The above code can be simplified as it has sevral redundant comparisons mks>=x && mks<=y which can be error prone and hard to maintain
    //Here is simplified approach which has comparision of upper bounds for each grade
    if (mks<25)
    {
        cout<<"Grade: F"<<endl;
    }
    else if (mks<45)
    {
        cout<<"Grade: E"<<endl;
    }
    else if (mks<50)
    {
        cout<<"Grade: D"<<endl;
    }
    else if (mks<60)
    {
        cout<<"Grade: C"<<endl;
    }
    else if (mks<70)
    {
        cout<<"Grade: B"<<endl;
    }
    else if (mks<=100)
    {
        cout<<"Grade: A"<<endl;
    }
    else 
    {
        cout<<"X"<<endl;//x indicates invalid input
    }
    return 0;
}