//simple hashing algorithm which uses the basics of hashing

#include <iostream>
using namespace std;

int har;

int main()
{
    cout<<har<<endl;
    cout<<"enter: "<<endl;
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int arr1[13]={0};
    //very important note, here the maximum element's count which you 
    //can store is 10^6(WHEN DECLARING IN MAIN), anything more than that will throw you a segmentation fault
    //but when you declare globally, the array can go till 1e7 (10^7)
    

    //for boolian, main->1e7, and globally->1e8

    //another very important thing to note, when you declare an array globally
    //everything is given value 0 for initialisation instead of garbage values;
    for(int i=0;i<n;i++)
    {
        arr1[arr[i]]+=1;
    }
    
    cout<<"enter which number: "<<endl;
    int num;
    cin>>num;

    cout<<"the number "<<num<<" has been repeated "<<arr1[num]<<" times"<<endl;
    
}