//heapify algorithm
//basically from full binary tree we know that, all the leaf nodes lie from index
//n/2+1 to nth index, with n being the size (total number of elements)
//so there is n need to process the leaf nodes, because they are alredy heaps
//we need to compare all the parents, basically nodes from index 1 to n/2

//heapify algorithm makes the element reach within Olog(n)
//and building heap O(n)

#include <iostream>
using namespace std;

void heapify(int arr[],int n , int i)
{
    int largest = i;
    int left = (i*2) ;
    int right = (i*2)+1;

    if(left<=n && arr[left]>arr[largest])//when indexing is from, 1, make sure to do <= n
    {
        largest = left;
    }
    if(right<=n && arr[right]>arr[largest])
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
    int arr[7] = {-1,50,52,49,55,54,53};
    int n = 7;
    for(int i=(n/2);i>0;i--)
    {
        heapify(arr,n,i);
    }

    //this building of heap gets done in O(n) complexity

    cout<<"now printing"<<endl;
    for(int i=1;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}