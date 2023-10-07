//say number recursion amazing code

#include <iostream>
#include <string>
using namespace std;

void sayNumber(int n,string arr[])
{
    //base case
    if(n==0)
    {
        return;
    }

    //processing
    int digit = n%10;
    n = n / 10;

    //recursion call;
    sayNumber(n,arr);
    cout<<arr[digit]<<" ";
}

int main()
{   
    cout<<"enter a digit that you'll like to convert into words"<<endl;
    int num;
    cin>>num;
    string array[10] = {"zero","one","two",
    "three","four","five","six","seven","eight"
    ,"nine"};
    sayNumber(num,array);
    cout<<endl;
}