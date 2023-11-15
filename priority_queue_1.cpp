//this is the code that I made for priority queue during my exam using the concept of arrays
//trust me, this algo bangs!

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int value[100];
    int priority[100];
    int ans[100];

    int cnt=0;
    int i=0;

    bool choice = true;

    while(choice == true)
    {
        cout<<"enter"<<endl;
        cin>>value[i]>>priority[i];
        ans[priority[i]] = value[i];
        i++;
        cnt++;
        char ch;
        cin>>ch;

        if(ch =='y' || ch =='Y')
        {
            choice = true;
        }
        else
        {
            choice = false;
        }
    }
    
    sort(priority,priority+cnt);

    for(int i=cnt-1;i>=0;i--)
    {
        cout<<"dequeing element: "<<ans[priority[i]]<<endl;
    }


}