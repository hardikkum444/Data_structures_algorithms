//lets write an algorithm to reverse an array

#include <iostream>
using namespace std;

void reverse(int arr[],int n)
{
    int rev[n];
    int j=0;
    
    for(int i=n-1;i>=0;i--)
    {
        rev[j++] = arr[i];
    }
    
    cout<<"and the reversed array is: "<<endl;
    
    for(int i =0;i<n;i++)
    {
        cout<<rev[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    cout<<"enter size"<<endl;
    int size;
    cin>>size;
    
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    reverse(arr,size);
}