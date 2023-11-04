// Insertion Method: When you insert elements one by one into a heap, the time complexity for inserting each element is O(log n), and you do this for n elements. So the overall time complexity is O(n * log n).

// Heapify Method: The heapify algorithm rearranges an array into a max heap in linear time. Its time complexity is O(n).
    
#include <iostream>
using namespace std;

void heapify(int arr[],int n ,int i)
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

int main()
{
    int arr[6] = {10,30,50,20,35,15};
    int n =6;
    
    for(int i=(n/2)-1;i>=0;i--)
    {
        heapify(arr,n,i);
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// int main()
// {
//     int arr[6] = {50,52,49,55,54,53};
//     int n = 6;
//     for(int i=(n/2);i>0;i--)
//     {
//         heapify(arr,n,i);
//     }

//     //this building of heap gets done in O(n) complexity

//     cout<<"now printing"<<endl;
//     for(int i=1;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }















