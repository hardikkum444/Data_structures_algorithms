#include <iostream>
using namespace std;

//making a quick code which will quick sort chars, i wasnt able to do it during the
//exam lets see if i can do it today

int part(char arr[],int s , int e)
{
    int pivot = arr[s];
    int count = 0;

    for(int i =s+1;i<=e;i++)
    {
        if (arr[i]<=pivot)
        {
            count++;
        }
    }

    int index = count + s;
    swap(arr[s],arr[index]);

    int i = s;
    int j = e;

    while(i<index && j>index)
    {
        while(arr[i]<=arr[index])
        {
            i++;
        }
        while(arr[j]>arr[index])
        {
            j--;
        }
        while(i<index && j>index)
        {
            swap(arr[i++],arr[j--]);
        }
    }
    return index;
}

void Qsort(char arr[],int s, int e)
{
    if(s>=e)
    {
        return;
    }

    int p = part(arr,s,e);
    
    Qsort(arr,s,p-1);
    Qsort(arr, p+1,e);
}


int main()
{
    char arr[5] = {'d','s','a','e','c'};
    int size = 5;
    Qsort(arr,0,size-1);

    for(int i =0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//for some reason it works now!
//and it didnt work during the exam

//however: i guess i found the fault which i may have commited during the exam
//instead of for(int i =s+1;i<=e;i++) i may have written for(int i =s+1;i<e;i++)
//i<e, when it should have been i<=e





