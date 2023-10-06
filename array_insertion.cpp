//this is the code for insertion in an array


#include <iostream>
using namespace std;

void insert(int arr[],int position,int num,int size)
{
    for(int i = size;i>=position;i--)
    {
        arr[i]=arr[i-1];
    }
    
    arr[position-1] = num;
}

int main()
{
    int arr[10]={1,2,3,4,5};
    int size = 5;

    for(int i = 0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<endl;

    insert(arr,3,300,5);
    for(int i = 0;i<=size;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}