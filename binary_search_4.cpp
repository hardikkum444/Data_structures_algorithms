// to program an algorithm which finds the pivot element in an array 


#include <iostream>
using namespace std;

int pivot(int arr[], int size)
{
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;

    while(start<end)
    {
        if(arr[mid]>=arr[0])
        {
            start = mid+1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end-start)/2;

    
    }

    return end;
}

int main()
{
    int arr[7]={8,9,10,2,3,4,5};
    int size = 7;
    int ans = pivot(arr,size);
    cout<<"the pivot element is: "<<arr[ans]<<endl;
}