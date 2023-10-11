//this is the quick sort algorithm 

#include <iostream>
using namespace std;

int partition_sort(int arr[], int s, int e)
{
    int pivot = arr[s];
     
    int count = 0;
    for(int i=s+1;i<=e;i++) //we are doing i<=e because, we are starting from 1th index, self explanatory 
    {
        if(arr[i]<=pivot)
        {
            count++;
        }
    }

    int index = count+s;
    swap(arr[index],arr[s]);

    int i =s, j=e;
    while(i<index && j>index)
    {
        while(arr[i]<=pivot)
        {
            i++;
        }

        while(arr[j]>pivot)
        {
            j--;
        }

        if(i<index && j>index)
        {
            swap(arr[i++],arr[j--]);
        }
    }
return index;
}


void quickSort(int arr[], int s, int e)
{
    if(s>=e)
    {
        return;
    }

    int p = partition_sort(arr,s,e);

    quickSort(arr,s,p-1);
    
    quickSort(arr,p+1,e);
}


int main()
{
    int arr[5] = {5,3,44,2,32};
    int size = 5;

    quickSort(arr,0,size-1);

    for(int i =0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}