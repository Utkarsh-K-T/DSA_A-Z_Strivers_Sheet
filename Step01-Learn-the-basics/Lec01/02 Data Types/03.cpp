/*
3) User Defined Types
Structures : struct
Classes : class
Unions : union
*/
#include<iostream>
using namespace std;

//Structuter - A collection of variables of different types under a single name
struct Point
{
    int x;
    int y;
};

//Class - A blueprint for objects; it can contain variables and functions
class Info
{
    public:
        string name;
        int age;
};

// Union - A special data type that allows storing different data types in the same memory location
union Value 
{
    int intValue;
    float floatValue;
};

int main(){
    //Structures - cannot contain methods only contain members
    cout<<"Structure"<<endl;
    Point p1={3,6};
    cout<<"struct p1.x : "<<p1.x<<endl;
    cout<<"struct p1.y : "<<p1.y<<endl;
    cout<<endl;

    //Classes 
    cout<<"Class"<<endl;
    Info stud;
    stud.name = "Utkarsh";
    stud.age = 21;
    cout<<"class stud.name : "<<stud.name<<endl;
    cout<<"class stud.age : "<<stud.age<<endl;
    cout<<endl;

    //Union 
    cout<<"Union"<<endl;
    Value val;
    val.intValue = 36;
    //val.floatValue = 3.6;
    cout<<"union val.intValue : "<<val.intValue<<endl;
    //cout<<"union val.floatValue :  "<<val.floatValue<<endl;
    return 0;
}