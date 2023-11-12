//i understand the concept of insertion sort now


// basically when we do insertion sort, we use two indicators, one which is called i and the other one which is called j, 
// j always moves one step ahead of i and compares itself with i, which at first 
//is the minimum value, also, onw more thing to note is that, when we are finding the 
//minimum index, we first find it in the first loop and then swap it with i which for the 
//first loop is at first index, terefore the smallest number gets the first index, where it 
//belongs, then i moves to the second index, where the second smallest index is then swapped with it
//, therefore the second smallest elemnt getting the second smallest spot 

#include <iostream>
using namespace std;

void insertion_sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min = i;
        for(int j = i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min  = j;
            }
        }
        swap(arr[min],arr[i]);
    }
}

int main()
{
    int arr[6] = {23,32,11,22,29,76};
    int n =6;
    insertion_sort(arr,n);
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


//the time complexity of insertion sort is O(n^2);
//best time complexity of insertion sort is O(n);