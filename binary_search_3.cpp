//to create a code which finds the peak element in a given array 

#include <iostream>
using namespace std;

int peak(int arr[],int size)

{
    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2;

    while (start<end)
    {
        if(arr[mid]<arr[mid+1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start)/2;
    }


return start;
}

int main()
{
    int arr[10]={1,2,3,3,9,8,7};
    int size = 7;
    int peak_1 = peak(arr,size);
    cout<<"the peak element is: "<<arr[peak_1]<<endl;
    
}