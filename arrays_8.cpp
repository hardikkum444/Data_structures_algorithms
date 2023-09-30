//this is a ridiculous question to which i have found the answer to
//it was ridiculuos becasue of the logic used in it.



//by the way this is the code for circular right shift.
//same can be done for circular left shift.


// #include <iostream>
// using namespace std;

// void crsh(int arr[],int size)
// {   
//     int store1;
//     int store2=arr[0];
//     int store3=arr[size-1];
//     for(int i=0;i<size;i++)
//     {   
//         store1=arr[i+1];
//         arr[i+1]=store2;
//         store2=store1;
//     }
//     arr[0]=store3;
// }
// int main()
// {
//     int n[5]={28,25,12,34,23};
//     int s = 5;
//     crsh(n,s);

//     for(int i=0;i<s;i++)
//     {
//         cout<<n[i]<<endl;
//     }
//     return 0;
// }


//and here i have created the code for insertion 
//again i did it by myslef!!
        

// #include <iostream>
// using namespace std;

// void insertion(int arr[],int size,int pos,int num)
// {   
//     int store1;
//     int store2=arr[pos];
//     arr[size]=arr[size-1];
//     for(int i=pos;i<size;i++)
//     {   
//         store1=arr[i+1];
//         arr[i+1]=store2;
//         store2=store1;
//     }
//     arr[pos]=num;
    
// }
// int main()
// {
//     int n[20]={1,2,3,4,5};
//     int s = 5;
//     insertion(n,s,0,90);

//     for(int i=0;i<=s;i++)
//     {
//         cout<<n[i]<<endl;
//     }
//     return 0;
// }


//took me around 2 mins to code the code for deletion 
//and here it is:


#include <iostream>
using namespace std;

void insertion(int arr[],int size,int pos)
{   
    // int store1;
    // int store2=arr[pos];
    // arr[size]=arr[size-1];
    for(int i=pos;i<size;i++)
    {   
        arr[i]=arr[i+1];
    }
    //arr[pos]=num;
    
}   
int main()
{
    int n[20]={1,2,3,4,5};
    int s = 5;
    insertion(n,s,4);

    for(int i=0;i<s-1;i++)
    {
        cout<<n[i]<<endl;
    }
    return 0;
}
        
