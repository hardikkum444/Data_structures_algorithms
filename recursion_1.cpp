//recursion is nothing but calling a function within a function 
//say for example 2^5 = 2 * 2^4

//which can be represented as 2^n = 2 * 2^(n-1)
//in case of factorial, 5! = 5 * 4!
//or n! = n * (n-1)!
//written in the form of function, f(n) = n * f(n-1)  also 0! = 1

//therefore the base case here would be if (n-1) = 0 , because 0! is nothing but 1
//which means we also need a base case in the case for creating a recursive function for factorial
//and for base case we have to create a return value, therfore the function will be of int type which returns out ans needed



//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n == 0)
    {
        return 1;
    }
        
    
    //int small = factorial(n-1);
    //int big = n * small;
    return n*factorial(n-1);
    //it is kind of a for loop which will literate until base case occurs and then it will return and exit
    
}
    
int main()
{
    int num = 6;
    int fact = factorial(num);
    cout<<fact<<endl;
}


//base case is also necessary as if there is no base case
//function will be called infinitely and values may even go in negative
//also stack overflow will occurr.


