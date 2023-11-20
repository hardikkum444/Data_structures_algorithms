#include <iostream>
using namespace std;

void heapify(int arr[],int n , int i)
{
    int largest = i;
    int left = 2*1 +1;
    int right = 2*1 +2;

    if(left < n && arr[left] > arr[largest])
    {
        largest = left;
    }
    if(right < n && arr[right] > arr[largest])
    {
        largest = right;
    }

    if(i!=largest)
    {
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}

void heapsort(int arr[],int n)
{
    for(int i =n-1;i>0;i--)
    {
        swap(arr[0],arr[i]);
        heapify(arr,n,i);
    }
}

int main()
{
    int n =5;
    int arr[5] = {23,22,13,45,55};

    for(int i=n/2 -1;i>=0;i--)
    {
        heapify(arr,n,i);
    }

    heapsort(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


}