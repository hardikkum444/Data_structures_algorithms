//alternating the elements 


//i tried to make this but instead, i made an left shift code 




// #include <iostream>
// using namespace std;

// void alternate(int arr[],int size)
// {
//     for(int i=0;i<size;i+=2)
//     {
//         if((i+1)<size)
//         {
//         swap(arr[i],arr[i+1]);
//         }
       
//     }
// }

// void print_arr(int arr[],int size)
// {
//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i]<<endl;
//     }
// }

// int main(){

//     int a[100];
//     int s;

//     cout<<"enter size of array"<<endl;
//     cin>>s;

//     for (int i=0;i<s;i++)
//     {
//         cout<<i<<" element: "<<endl;
//         cin>>a[i];

//     }

//     alternate(a,s);
//     print_arr(a,s);

    

// }


// what if we want to code without the swap inbult function
//done this myself!!


#include <iostream>
using namespace std;

void alternate(int arr[],int size)
{
    int store1;
    //int store2;
    for(int i=0;i<size;i+=2)
    {
        if((i+1)<size)
        {
        //swap(arr[i],arr[i+1]);
        store1=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=store1;
        }
        
       
    }
}

void print_arr(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
}

int main(){

    int a[100];
    int s;

    cout<<"enter size of array"<<endl;
    cin>>s;

    for (int i=0;i<s;i++)
    {
        cout<<i<<" element: "<<endl;
        cin>>a[i];

    }

    alternate(a,s);
    print_arr(a,s);

    

}
       


