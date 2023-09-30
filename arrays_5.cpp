//reversing an array

#include <iostream>
using namespace std;

void reverse(int arr[],int size)
{
    int start= 0;
    int end = size-1;
    int startstore;
    int endstore;


    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int n[100];
    int s;

    cout<<"enter size of array"<<endl;
    cin>>s;

    for (int i=0;i<s;i++)
    {
        cout<<i<<" element: "<<endl;
        cin>>n[i];

    }

    reverse(n,s);
   
   
    for (int i=0;i<s;i++)
    {
        cout<<n[i]<<endl;

    }



    return 0;


}

//swap alt
//find unique element in array 
//find duplicate element in array
//find array instersection 
//pair sum
//triplet sum
//sort 0's and 1's


