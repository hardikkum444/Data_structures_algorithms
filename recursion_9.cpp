//simple recursive code to check whether a given string is a palindrome or not


#include <iostream>
#include<string.h>
using namespace std;

bool checkIsPalindrome(string str, int i, int j)
{
    if(i>j)
    {
        return true;
    }
    if(str[i]!=str[j])
    {   
        return false;
    }

    return checkIsPalindrome(str,++i,--j);
}

int main()
{
    string str = "hardik";
    bool palindrome = checkIsPalindrome(str,0,str.length()-1);

    if(palindrome)
    {
        cout<<"it is a palindrome"<<endl;
    }
    else
    {
        cout<<"it aint a palindrome"<<endl;
    }
}