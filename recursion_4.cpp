//basic understanding of how recursion works

#include <iostream>
using namespace std;

void reach(int src, int dest)
{
    if(src==dest)
    {
        cout<<"you have reached your destination"<<endl;
        return;
    }

    cout<<"at source "<<src<<" for destination "<<dest<<endl;

    src++;

    reach(src,dest);
}

int main()
{
    reach(1,10);
}
