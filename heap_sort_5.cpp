//heap sort also takes O(n*logn) time

//first we will convert given array into a heap


//and then we will use heap sort, which will swap arr[1] (largest element) , with arr[size], somewhat of a smallest element and then call heapify for size-1;


#include <iostream>
using namespace std;

void heapify(int arr[],int n, int i)
{
    int largest = i;
    int left = (2*i);
    int right = (2*i)+1;
    
    if(left<=n && arr[left]>arr[largest])
    {
        largest = left;
    }
    if(right<=n && arr[right]>arr[largest])
    {
        largest = right;
    }
    
    if(largest!=i)
    {
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}

void heapSort(int arr[],int s)
{
    for(int i =s;i<1;i--)
    {
        swap(arr[i],arr[1]);
        heapify(arr,s-1,i);
    }
}

int main()
{
    int arr[7] = {-1,50,52,49,55,54,53};
    int n = 7;
    for(int i=(n/2);i>0;i--)
    {
        heapify(arr,n,i);
    }

    //this building of heap gets done in O(n) complexity

    cout<<"now printing"<<endl;
    for(int i=1;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    heapSort(arr,n);
    
    cout<<"now printing"<<endl;
    for(int i=1;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
}





