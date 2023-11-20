//random code for solving a question related to DSA
//basically takes in number of elements and combines it to form an array, using some minor concepts

#include <iostream>
using namespace std;

int main()
{
    int* ans = new int(100);
    int n;
    int m;
    cout<<"enter iterations: "<<endl;
    cin>>m;
    
    int o = 0;
    
    while(m!=0)
    {
        cout<<"enter number of values: "<<endl;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            ans[o++] = arr[i];
        }
        
        m--;
    }
    
    for(int i=0;i<o;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}