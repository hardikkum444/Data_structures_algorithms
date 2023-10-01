//insertion sort 

#include <iostream>
using namespace std;

void insertion(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {   
        int min_index=i;
        for(int j=(i+1);j<size;j++)
        {
            if(arr[j]<arr[min_index])
            {
                min_index=j;}
                
            
        }
        swap(arr[min_index],arr[i]);
    }
}

int main()
{
    int num[10]={10,1,4,21,6,12};
    int s=6;
    insertion(num,s);

    for(int i=0;i<s;i++)
    {
        cout<<num[i]<<endl;
    }
    return 0;

}