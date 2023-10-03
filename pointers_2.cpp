#include <iostream>
using namespace std;

int main()
{
    // int a = 5;
    // int *p = 0;
    // //p = &a;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    

    int num = 5;
    int *p = &num;
    int *q = p;
    int h = *q;

    cout<<p<<endl;
    cout<<q<<endl;
    cout<<h<<endl;

    cout<<"\n"<<*p<<endl;
    cout<<*q<<endl;
    cout<<h<<endl;

    //you can see the difference

    int i = 10;
    int *o = &i;
    *o+=1;

    cout<<(*o)++<<endl;
    //it is important to note that it first prints the value of *o and then increments it
    *o+=1;
    cout<<(*o)<<endl;




}