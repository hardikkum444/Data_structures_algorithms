//this is the code for array insertion that i created using shifting of elements and reversal

#include <iostream>
using namespace std;

int main()
{
    int arr[100] = {23,45,32,12,45};
    int n=5;
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
    int ch;
    cout<<"enter number"<<endl;
    cin>>ch;
    
    int pos;
    cout<<"enter position"<<endl;
    cin>>pos;
    
    for(int i=n;i>pos-1;i--)
    {
        arr[i] = arr[i-1];
    }
    
    arr[pos-1] = ch;
    
    for(int i=0;i<n+1;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
}