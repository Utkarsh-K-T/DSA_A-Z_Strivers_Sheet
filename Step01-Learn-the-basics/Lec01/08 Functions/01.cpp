/*
Functions
1) What are functions?
2) Why are functions used?
3) Types of functions
4) Built in functions (math.h)
5) Garbage return value
6) Pass by value
7) Pass by refrence
8) Arrays using pass by refrence

1) What are functions?
Functions are set of code which performs something for us

2) Why are functions used?
- to modularise code
- to incrase readability
- to use same code mulitple times

3) Types of functions
- void: does not returns any thing. eg.: displaying anything. does something but Does not returns anything
- return: throws some values
- parameterised: functions needs to be passed along with some values.
- non parameterised: functions need not requires any value while calling it.

4) Built in functions (math.h)
- many built in functions are provided in cpp like Trigonometric functions, Hyperbolic functions, Exponential and logarithmic functionsm, pow fucntions, etc.

5) Garbage return value
-  if function is declared as return type and does not returns any value then it returns some random garbage value

6) Pass by value
- it takes the parameter and perform the operations without updating the orignal parameter
- copy is passed

7) pass by refrence
- it takes the parameter and perform the operations along with that it also updates the parameters orignal value
- it takes orignal/ address

8) Arrays using pass by refrence
- arrays are always passed by reference even though we not pass it explicitly it is impllicitly passed by refrence!
*/
#include <iostream>
using namespace std;

void printName()
{
    cout<<"Inside void Function!"<<endl;
}
void printNamePara(string name)
{
    cout<<"Inside parameterised void(), name: "<<name<<endl;
}
int sumNum(int a, int b)
{
    return a+b;
}
int GarbVal(int n)
{
    if(n>=0)
    {
        return n;
    }
    // here there is no return value for non -ve numbers so it will return garbage value!
}
void incrementNum(int n)
{
    cout<<"Inside the incrementNum()"<<endl;
    cout<<n<<endl;
    n += 5;
    cout<<n<<endl;
    n+=5;
    cout<<n<<endl;
}
void incrementNumRef(int &n)
{
    cout<<"Inside the incrementNumRef()"<<endl;
    cout<<n<<endl;
    n += 5;
    cout<<n<<endl;
    n+=5;
    cout<<n<<endl;
}
void strModify(string s)
{
    cout<<"Inside strModify()"<<endl;
    cout<<s<<endl;
    s[0] = 'o';
    cout<<s<<endl;
}
void strModifyRef(string &s)
{
    cout<<"Inside strModifyRef()"<<endl;
    cout<<s<<endl;
    s[0] = 'o';
    cout<<s<<endl;
}
void arrModify(int arr[], int n)
{
    cout<<"Orignal value of arr[0]: "<<arr[0]<<endl;
    arr[0] += 100;
    cout<<"Value of array inside arrModify() arr[0]: "<<arr[0]<<endl;
}


int main()
{
    //Void function (non parameterised)
    cout<<"\nVoid function (non parameterised)\n";
    printName();

    //Parameterised void function
    cout<<"\nParameterised void function\n";
    printNamePara("Utkarsh");

    // return functions (parameterised)
    cout<<"\nReturn functions (parameterised)\n";
    int num1, num2;
    cout<<"Enter num1: ";
    cin>>num1;
    cout<<"Enter num2: ";
    cin>>num2;
    cout<<num1<<" + "<<num2<<" = "<<sumNum(num1,num2)<<endl;

    //Built in functions
    cout<<"\nBuilt in functions\n";
    cout<<"Max of "<<num1<<", "<<num2<<" is "<<max(num1,num2)<<endl;
    cout<<"Min of "<<num1<<", "<<num2<<" is "<<min(num1,num2)<<endl;
    cout<<"Pow of "<<num1<<" raise to "<<num2<<" is "<<pow(num1,num2)<<endl;

    //Garbage Value return
    cout<<"\nGarbage Value return\n";
    cout<<"Garbage value "<<GarbVal(-1)<<endl;

    //Pass by value
    cout<<"\nPass by value\n";
    int n = 10;
    incrementNum(n);//pass by value funciton
    cout<<"n = "<<n<<endl;//displays 10 as orignal value of num is not updated while passing a function by value
    string s = "Utkarsh";
    strModify(s);
    cout<<"s = "<<s<<endl;

    //Pass by refrence
    cout<<"\nPass by refrence\n";
    incrementNumRef(n);
    cout<<"n = "<<n<<endl;
    s = "Utkarsh";
    strModifyRef(s);
    cout<<"s = "<<s<<endl;

    //Arrays using pass by refrence
    cout<<"\nArrays using pass by refrence\n";
    cout<<"Conventional way to input an array and display it!"<<endl;
    int siz = 5;
    int arr[siz];
    for(int i=0; i<5; i++)
    {
        cout<<"Value at arr["<<i<<"] : ";
        cin>>arr[i];
    }
    for(int i=0; i<5; i++)
    {
        cout<<"arr["<<i<<"] : "<<arr[i]<<endl;
    }
    cout<<"Pass by refrence : array and display it!"<<endl;
    arrModify(arr,siz);
    cout<<"Value of array after using arrModify() arr[0]: "<<arr[0]<<endl;

    return 0;
}
