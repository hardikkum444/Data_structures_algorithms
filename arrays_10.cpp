//inertion sort algorithm


#include <iostream>
using namespace std;

void insertion(int arr[],int s)
{
    for(int i=1;i<s;i++)
    {   int j=(i-1);
        int temp=arr[i];
        for(;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }

            else{
            
                break;
            }
        }
        arr[j+1]=temp;
    }   
}

int main()
{
    int n[6]={10,1,4,21,6,12};
    int size=6;
    insertion(n,size);

    for(int i=0;i<size;i++)
    {
        cout<<n[i]<<endl;
    }
    return 0;

}


