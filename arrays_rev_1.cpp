//basic linear search

//lets quickly revise linear search
#include <iostream>
using namespace std;

void search(int arr[],int key,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            cout<<"your number has been found at the "<<i<<" index"<<endl;
            exit(0);
        }
    }
    cout<<"your number has not been found"<<endl;
}

int main()
{
    cout<<"enter size"<<endl;
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"what would you like to search for: "<<endl;
    int key;
    cin>>key;
    search(arr,key,n);
}