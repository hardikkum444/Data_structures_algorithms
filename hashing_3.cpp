//using maps for hashing numbers, as numbers in array can only go up until 10^7
//all operations in maps happen in O(log n), for worst and best case senarios 

//in case of unordered maps, they have complexities O(1) in avg and nest cases and have time complexity O(N) only in the worst case
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"enter size: "<<endl;
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    
    //pre-computation 
    
    map<int, int> map;
    for(int i=0;i<n;i++)
    {
        map[arr[i]]++;
    }
    
    
    //maps are always sorted, therefore ->
    
    //this is for traversing a map using iterator
    for(auto it:map)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }
    
    // cout<<"enter queries: "<<endl;
    // int q;
    // cin>>q;
    // while(q--)
    // {
        
    // }
    
}