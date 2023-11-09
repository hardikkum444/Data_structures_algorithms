//hashing

//time complexity of hashing is O(1) for insertion, deletion and searching in a hash table

//this is my implementation of a hashing code 

//this is me trying to write the hashing code 

#include <iostream>
using namespace std;

// int main()
// {
//     cout<<"enter: "<<endl;
//     int n;
//     cin>>n;
//     int arr[n];
    
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
    
//     int arr1[n]={0};
    
//     for(int i=0;i<n;i++)
//     {
//         arr1[arr[i]]+=1;
//     }
    
//     for(int i=0;i<n;i++)
//     {
//         cout<<i<<": "<<arr1[i]<<endl;
//     }
    
// }
    
//but the time complexity of this is not O(1)



//this is me trying to write the hashing code 

#include <iostream>
using namespace std;

int main()
{
    cout<<"enter: "<<endl;
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int arr1[n]={0};
    
    for(int i=0;i<n;i++)
    {
        arr1[arr[i]]+=1;
    }
    
    cout<<"enter which number: "<<endl;
    int num;
    cin>>num;

    cout<<"the number "<<num<<" has been repeated "<<arr1[num]<<" times"<<endl;
    
}
    
    
    

    