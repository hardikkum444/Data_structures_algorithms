//merge sort uses the concept of recursion and merging of two sorted arrays
//you also require the concept of dynamic memory allocation 


#include <iostream>
using namespace std;

void merge(int* arr,int start, int end)
{
    int mid = (start + end)/2;
    
    int len1 = (mid-start)+1;
    int len2 = (end - mid);
    

    int* first = new int[len1];
    int* second = new int[len2];

    int mainIndex = start;
    for(int i = 0;i<len1;i++)
    {
        first[i] = arr[mainIndex++];
    }


    for(int i = 0;i<len2;i++)
    {
        second[i] = arr[mainIndex++];
    }

    int firstIndex = 0;
    int secondIndex = 0;
    int  mainIndex1 = start;

    while(firstIndex<len1 && secondIndex<len2)
    {
        if(first[firstIndex]<second[secondIndex])
        {
            arr[mainIndex1++] = first[firstIndex++];
        }

        else  
        {
            arr[mainIndex1++] = second[secondIndex++];
        }
    }

    while(firstIndex<len1)
    {
        arr[mainIndex1++] = first[firstIndex++];
    }

    while(secondIndex<len2)
    {
        arr[mainIndex1++] = second[secondIndex++];
    }
}

void mergeSort(int* arr,int s, int e)
{
    if(s>=e)
    {
        return;
    }

    int mid = (s+e)/2;

    mergeSort(arr,s,mid);
    
    mergeSort(arr,mid+1,e);

    merge(arr,s,e);
}

int main()
{
    int arr[5] = {2,5,1,6,9};
    int n = 5;

    mergeSort(arr,0,n-1);

    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}




