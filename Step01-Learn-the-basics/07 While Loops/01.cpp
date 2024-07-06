/*
While Loops
1) Basics of while loops
2) Termination Conditions
3) Optimisation

1) Basics of while loops
to execute a block of code repeatedly until a certain condition is met. 
while loop is a control structure in programming that repeatedly executes a block of code as long as a specified condition remains true. 
code executes only when the condition is satisfied
it terminates as soon as that condition becomes false

It relies on the condition being true from the outset for any code execution to occur.
if the initial condition is false.
steps in while loop:
-Evaluation of expreassion: loop begins here
-Condition Check: test if expression is true/ false
-Re-evaluation: after execution of code expression is reevaluated
-continuation or Termination: 
structure of while loop:
while(condition)
{
    //body of the loop
}
vital for tasks like validating user input or processing data until a specific condition is met.
2) Termination Conditions
-pecifies when the loop should stop executing. 
-Without proper termination conditions, a while loop can run indefinitely, leading to what's known as an "infinite loop." Infinite loops can crash programs and consume excessive system resources, making them a critical issue to avoid.
-Termination conditions ensure that the loop will eventually exit, making the algorithm correct and efficient.
3) Optimisation
making them more efficient by minimising unnecessary iterations
common optimization technique is to use loop control statements like break or continue within the loop body.
-break: allows to exit the loop prematurely even before the termination condition is met. for example searching an element in an array and you find it so now you can exit the loop even before termination condition is met
-continue: skips the current iteration of the loop and moves to the next one. kip certain elements or avoid executing some code under specific condition
*/
#include<iostream>
using namespace std;

int main()
{
    //Factorial using while loops
    int n=5;
    int factorial = 1;

    while(n>0)
    {
        factorial *=n;
        n--;
    }
    cout<<"Factorial of 5 is: "<<factorial<<endl;

    int num[] = {1,2,3,4,5,6,7,8,9,10};
    int target = 6;
    for(int n: num)//uses break to exit loop immediately when the target value is found which prevents unnecessary iterations.
    {
        if(n==6)
        {
            cout<<"Target found: "<<target<<endl;
            break;
        }
        else
        {
            cout<<"Checking: "<<n<<endl;
        }
    }
    for(auto n : num)//uses continue to skip even nubmers, so only odd numbers are printed avoiding the execution of code for even numbers
    {
        if(n%2==0)
        {
            continue;
        }
        cout<<"Odd numbers: "<<n<<endl;
    }
    return 0;
}

