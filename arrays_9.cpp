//This ones just a tiny bit tricky, that's all!
//this is bubble sort by the way


#include <iostream>
using namespace std;

void bubble_sort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {   bool swaped = false;
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swaped = true;
            
            }
            
        }
        if (swaped == false){
        cout<<"already sorted"<<endl;
        break;
        }
        
    }
}


int main()
{
    int n[5]={22,43,1,44,3};
    int s=5;
    bubble_sort(n,s);

    for(int i=0;i<=s-1;i++)
    {
        cout<<n[i]<<endl;
    }
    return 0;
}



//it is important to note that in if() we always use == for comarision 
//even if it is a bool data type.