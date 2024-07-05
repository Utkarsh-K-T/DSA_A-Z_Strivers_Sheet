/*
For Loops
1) What is a For Loop and Why is it Used?
2) Flow of the for loop
3) Nested For Loops
4) Conditionals Inside For Loops
5) Customising For Loops

1) What is a For Loop and Why is it Used?
a control structure in programming that allows you to execute a specific block of code repeatedly.
useful to perform the same task multiple times without duplicating your code.
Essential components of a for loop:
- Initialization: declare and initialize a variable that serves as a counter. This step only happens once at the beginning.
- Condition:  specify a condition that determines when the loop should stop executing.
- Increment/Decrement: how the counter variable changes after each iteration.

2) Flow of the for loop
Start: begins at the "start" point, indicating the beginning of the loop.
Initialize counter: he loop control variable is initialised. This typically involves assigning an initial value to the counter. Usually denoted by the variable ‘i’
Condition check: condition for the loop is checked in this stage. If the condition is evaluated as "true," the loop continues to execute; otherwise, it terminates.
If the condition is "true,"
After completing an iteration Condition check
After executing the loop body counter is incremented or decremented (imp : controlling the loop's termination.)
loop continues to execute as long as the condition remains "true." Once the condition becomes "false," the loop exits.
After exit from the loop, the code below the for-loop is executed and the program moves on.

3) Nested For Loops
we can use one for loop inside another (nest)
useful while working with multi-dimensional data structures like a 2-D Array or need to solve complex problems involving multiple iterations.

4) Conditionals Inside For Loops
can include conditional statements (if, else if, else) within them. This allows you to execute different code blocks based on certain conditions during each iteration.

5) Customising For Loops
flexibility in how we can structure for loop.
For instance, we can customise the increment step to achieve specific patterns or iterate a certain number of times.
*/
#include<iostream>
using namespace std;

int main()
{
    //Basics of for loop
    cout<<"\nBasics of for loop\n";
    for(int i=1; i<=10; i++)
    {
        cout<<"This is "<<i<<"th iterator."<<endl;
    }

    //Nested for loop
    cout<<"\nNested for loop\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) 
        {
            cout << "i = " << i << ", j = " << j << endl;
            // Nested loop code
        }
    }

    // Conditionals Inside For Loops
    cout<<"\nConditionals Inside For Loops\n";
    for (int i = 1; i <= 10; i++) 
    {
        // Code for even numbers
        if (i % 2 == 0) 
        {
            cout<<i<<" is even"<<endl;
        
        } 
        // Code for odd numbers
        else 
        {
            cout<<i<<" is odd"<<endl;
        }
    }

    //Customising For Loops
    cout<<"\nCustomising For Loops\n";
    int j = 1;
    for (int i = 5; i <= 50; i += 5) 
    {
        cout << "5 x " << j << " = " << i << endl;
        j++;
    }

    return 0;
}