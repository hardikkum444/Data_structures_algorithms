//  BINARY SEARCH //




//this is the simple algorithm of linear search
//this had riculous time complexity, as it literally checks every element of the
//array 


//therefore we will use binary search which is much better

// #include <iostream>
// using namespace std;

// bool search(int arr[],int size, int key)
// {
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]==key)
//         {
//             return 1;
//         }
    
//     }
//     return 0;
// }

// int main()
// {
//     int array[5]={1,2,3,4,5};
//     int size = 5;
//     int key = 33;

//     bool search_1 = search(array,size,key);
//     if(search_1)
//     {
//         cout<<"present"<<endl;
//     }
//     else
//     {
//         cout<<"not present"<<endl;
//     }

//     return 0;
    
// }


//Binary search
//it is a very simple algorithm however there are points where you have to be carefull

#include <iostream>
using namespace std;

int binary(int arr[],int size,int key)
{
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }

        if(key>arr[mid])
        {
            start=mid+1;
        }

        else
        {
            end=mid-1;
        }
        mid=(start+end)/2;
    }

    return -1;
}

int main()
{
    int even_arr[6]={1,2,3,4,5,6};
    int odd_arr[3]={1,2,3};
    int s = 6;
    int key_1 = 1;
    int key_2 = 1;

    int index_1 = binary(even_arr,s,key_1);
    int index_2 = binary(odd_arr,s,key_2);


    if (index_1 == -1)
    {
        cout<<"not present"<<endl;
    }

    else{
    cout<<"your number is present at "<<index_1<<endl;}

    if (index_2 == -1)
    {
        cout<<"not present"<<endl;
    }

    else{
    cout<<"your number is present at "<<index_2<<endl;}


    
}

//but by using the formula of mid = (start+end)/2, we are doing a big mistake
//we know that the range of the int data type is (-2^31 to 2^31)

//therefore since the values of index cannot be negative, if starting point and 
//ending point are the biggest values of int, int that case from the formula we have just
//used, the value for int mid would be out of range 
//therefore the formula which we use for mid is (start + (end-start)/2);



//in case of an arr having 100 elements using linear serch, you will search through 100 hundred elements (100 comparisions)
//however if you do this with the help of binary search, you will have to only conduct search for 10 instances (10 comparisions)

// THE COMPLEXITY OF BINARY SEARCH IS O(logn)