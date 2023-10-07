//recursive code for n stairs problem, using two stairs or 1 stair approach;


#include <iostream>
using namespace std;

int stairs(int num)
{
    if(num == 0)
    {
        return 1;
    }

    if(num == 1)
    {
        return 1;
    }

    return stairs(num-1) + stairs(num-2);
}

int main()
{
    int num = stairs(5);
    cout<<num<<endl;
}
