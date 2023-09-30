//this is creating a code for linear search 
//basically searching for a particular element in a given array


// my attempt
//which actually works, got the logic right but the actual answer is
//a lot more cleaer





// #include <iostream>
// using namespace std;

// void search(int arr[],int size)
// {   
//     int s;
//     cout<<"what would you like for me to search? "<<endl;
//     cin>>s;
//     for (int i=0;i<size;i++)
//     {
//         if(arr[i]==s){
//             cout<<"yes the given element is present in the array"<<endl;
//             exit(0);
            
//         }
        
        
//     }
        
//         cout<<"No the given element is not present in the given array"<<endl;
        
// }


// int main()
// {
//     int n[100];
//     int s;

//     cout<<"enter size of array"<<endl;
//     cin>>s;

//     for (int i=0;i<s;i++)
//     {
//         cout<<i<<" element: "<<endl;
//         cin>>n[i];

//     }

//     search(n,s);
//     return 0;

    
// }


// actual answer

#include <iostream>
using namespace std;

bool search(int arr[],int size, int key)
{
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
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

    int k;
    cout<<"what would you like for me to search? "<<endl;
    cin>>k;

    bool found = search(n,s,k);
    if(found){
        cout<<"present"<<endl;
    }
    else{
        cout<<"not present"<<endl;
    }

    return 0;

    
}



