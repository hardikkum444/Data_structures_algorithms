//recursive relation for printing n numbers

#include <iostream>
using namespace std;

void count(int num)
{
    if(num == 1)
    {
        cout<<"1"<<endl;
        return;
    }

    cout<<num<<endl;
    count(num-1);
}

int main()
{
    count(10);
}