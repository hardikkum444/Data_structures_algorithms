//heap sort also takes O(n*logn) time

//first we will convert given array into a heap


//and then we will use heap sort, which will swap arr[1] (largest element) , with arr[size], somewhat of a smallest element and then call heapify for size-1;


#include <iostream>
using namespace std;

void heapify(int arr[],int n, int i)
{
    int largest = i;
    int left = (i*2)+1;
    int right = (i*2)+2;
    
    if(left<n && arr[left]>arr[largest])
    {
        largest = left;
    }
    if(right<n && arr[right]>arr[largest])
    {
        largest = right;
    }
    
    if(largest!=i)
    {
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}

void heapSort(int arr[],int n)
{
    for(int i=n-1;i>0;i--)
    {
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
}

int main()
{
    int arr[6] = {10,30,50,20,35,15};
    int n = 6;
    
    for(int i =(n/2)-1;i>=0;i--)
    {
        heapify(arr,n,i);
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    heapSort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
















