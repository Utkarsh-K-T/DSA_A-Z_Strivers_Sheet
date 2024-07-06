/*
Time Complexities
1) What is Time Complexity?
2) Why we should not judge any code on the basis of the time taken by a machine.
3) Definition
4) How we will represent the time complexity of any code
5) Things to remember
6) Imp rules for Time complexities?
7) What is Space Complexity?
8) Definition
9) Good coding practice
10) Points to remember

1) What is Time Complexity?
We can solve a problem using different logic and different codes. Time complexity basically helps to judge different codes and also helps to decide which code is better. 
Time complexity does not refer to the time taken by the machine to execute a particular code. 
How the running time of an algorithm changes with the size of the input.
It is a function that describes the amount of time an algorithm takes to run, as a function of the length of the input. It is usually expressed using Big O notation, which provides an upper bound on the growth rate of the running time.

2) Why we should not judge any code on the basis of the time taken by a machine?
the time taken by a machine can be changed depending on the configuration.
That is why we should not compare the two different codes on the basis of the time taken by a machine as the time is dependent on it.

3) Definition
The rate at which the time, required to run a code, changes with respect to the input size, is considered the time complexity. Basically, the time complexity of a particular code depends on the given input size, not on the machine used to run the code.

4) How we will represent the time complexity of any code
we generally use the Big O notation
O() -> inside () it denotes time required for execution of the code -> O (number of steps)
three rules, that we are going to follow while calculating the time complexity:
We will always calculate the time complexity for the worst-case scenario.
We will avoid including the constant terms.
We will also avoid the lower values.

5) Things to remember
Three rules, that we are going to follow while calculating the time complexity:
- We will always calculate the time complexity for the worst-case scenario.
- We will avoid including the constant terms.
- We will also avoid the lower values.

6) Imp rules for Time complexities?
i) Calculate the time complexity for the worst-case scenario:
- Omega notation(Ω) - Best Case: case where the code takes the least amount of time to get executed
- Big O() - Worst Case: case where the code takes the maximum amount of time to get executed. 
- Theta notation(θ) - Avg Case: case between the best and the worst. (O(N)+Ω(N))/2
- Now, as we always want that our system serves the maximum number of clients, we need to calculate the time complexity for the worst-case scenario. With this, we can actually judge the robustness of any code or any system.
ii) Avoid including the constant terms:
- When the N has higher values then the constants does affect the end solution much 
- consider this example  O(4N^3 + 3N^2 + 8): here for higher values of it won't affect the end solution much. so O(4N^3 + 3N^2).
iii)Avoid the lower values:
- For time complexities involving polymial equaitons with mulitple exponents, so O(4N^3 + 3N^2) will be considered as 4N^3 as 3N^2 has smaller exponent.
- we can actually ignore the constant coefficients as well. For example, considering the time complexity O(4N^3 ) as O(N^3) is also correct.

7) What is Space Complexity?
- refers to the memory space that a code uses while being executed
- complexity is also dependent on the machine and so we are going to represent the space complexity using the Big O notation instead of using the standard units of memory like MB, GB, etc.

8) Definition
- summation of auxiliary space and the input space
- Auxiliary space refers to the space that we use additionally to solve a problem
- And input space refers to the space that we use to store the inputs.

9) Good coding practice
- While modifying input reduces space complexity (1N to 2N), prioritize data integrity (don't modify) unless explicitly instructed by the interviewer.

10) Points to remember
- In competitive programming, target a time complexity of O(10^8) for 1 second time limit on online servers.
*/
#include<iostream>
using namespace std;

int main()
{
    cout<<"\nTime complexity Example\n";
    //Time complexity (3*5=15) -> O(15) -> O(3*N) -> O(N) {no. of conditions * no. of steps}
    for(int i=1; i<=5; i++)
    {
        cout<<"Hey";
    }

    cout<<"\nTime complexity Example\n";
    //Time complexity  O(4), Ω(1), 
    int marks = 10;                  // O   Ω   θ
    if(marks<25) cout<<"Grade D";     //1   1  (1+4)/2=2.5
    else if(marks<45) cout<<"Grade C";//2       
    else if(marks<65) cout<<"Grade B";//3       
    else cout<<"Grade A";             //4       

    cout<<"\nTime complexity Example\n";
    int n = 10;
    //Time complexity O(3*N+1) -> O(3*N) -> O(N)
    int x = 2 ;
    for (int i=1; i<=n; i++)
    {
        cout<<"Hey";
    }

    cout<<"\nTime complexity Example\n";
    int N = 10;
    //Time complexity O((N-1)*(N-1)) -> O(N^2-2*N+1) -> O(N^2-2*N) -> O(N^2)
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            cout<<"Hey";
        }
    }

    cout<<"\nTime complexity Example\n";
    //Time complexity O(N*(N+1)/2) -> O(N^2)
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<"Hey";
        }
    
    }

    cout<<"\nSpace complexity Example\n";
    //Space complexity O(N) -> O(3)
    int a,b;
    cin>>a>>b;// input space 2
    int c = a+b;// auxiliary space 1 
    cout<<c<<endl;
    return 0;
}