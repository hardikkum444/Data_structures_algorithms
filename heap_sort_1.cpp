#include <iostream>
using namespace std;

void heapify(int a[],int n,int i)
{
    int larg = i;
    int left = 2*i+1; //opposite (left child index)
    int right = 2*i+2; //right index
    if(left<n && a[i]>a[larg])
    {
        larg = left;
    }
    if(right<n && a[right] > a[larg])
    {
        larg = right;
    }
    if(larg != i)
    {
        swap(a[i],a[larg]);
        heapify(a,n,larg);
    }
}


void heapSort(int a[],int n)
{
    for(int i=n/2-1;i>=0;i--)
    {
        heapify(a,n,i);
    }
    for(int i =n-1;i>=0;i--)
    {
        swap(a[0],a[i]);
        heapify(a,i,0);
    }
}


int main()
{
    int n;
    cout<<"enter"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    heapSort(a,n);
    for(int i =0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}