// char array pointers

#include <iostream>
using namespace std;


int main()
{
    int a[10]={1,2};
    char b[5]="abcd";

    cout<<a<<endl;
    cout<<b<<endl;

    //as you can see here, outputs are different for int array and char array

    char *ptr  = &b[0];
    cout<<ptr<<endl;
    
    //here also, you'll see that, even the address of the pointer is printed as the elements in the array
    //so pointer is a little different in case of arrays.

    char temp='x';
    char *p = 'x';
    cout<<p<<endl;


return 0;
}


