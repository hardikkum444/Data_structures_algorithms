//this is another optimized toi algorithm to calculate the number of steps for n disks taken as input

#include <iostream>
using namespace std;

int toi(int d)
{
    if(d==1)
    {
        return 1;
    }
    else
    {
        int moves = 2*toi(d-1) +1;
        return moves;
    }
}

int main()
{
    int disks;
    cout<<"enter the number of disks"<<endl;
    cin>>disks;
    
    cout<<"and the number of moves are "<<toi(disks)<<endl;
}