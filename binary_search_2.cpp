//program an algorithm which gives the first and last occurences of a particular 
//number (we will use binary sort)


//made this algorithm by myslef baby!!!!
//but it does not work, because the concept used just isnt correct
//not to mention, the code also is barely optimized

// #include <iostream>
// using namespace std;

// class search
// {
//     public:
//     int first_occ = 0;
//     public:
//     int second_occ = 0;
//     void binary(int arr[],int size,int key)
//     {
//         int start = 0;
//         int end = size-1;
//         int mid = start + (end-start)/2;
        
        

//         while(start<=end)
//         {
//             if(arr[mid]==key)
//             {
//                 first_occ=mid;
//                 cout<<first_occ<<" ";
//                 break;
//             }

//             if(key>arr[mid])
//             {
//                 start=mid+1;
//             }

//             else
//             {
//                 end=mid-1;
//             }
//             mid=(start+end)/2;
//         }
        
        
//     }
//     void binary2(int arr[],int size, int key)
//     {
        
//         for(int i=first_occ;i<size;i++)
//         {
//             if(arr[i]!=arr[first_occ])
//             {
//                 second_occ=i-1;
//                 cout<<second_occ<<endl;
//                 break;
//             }
//         }

    
        
     
        // int start1 = size-1;
        // int end1 = 0;
        // int mid1=(start1+end1)/2;
        // int last_occ = 0;

        // while(start1>=end1)
        // {
        //     if(arr[mid1]==key)
        //     {
        //         last_occ=mid1;
        //         return last_occ;
        //     }

        //     if(key>arr[mid1])
        //     {
        //         end1=mid1+1;
        //     }

        //     else
        //     {
        //         start1=mid1-1;
        //     }
        //     mid1=(start1+end1)/2;
        // }


        
//     }

// };

// int main()
// {
//     int arr[6]={1,1,5,3,3};
//     int key = 3;
//     int size = 6;

//     search hardik;
//     hardik.binary(arr,size,key);
//     hardik.binary2(arr,size,key);

// }

//i mean it does the trick, took me quite some time to figure this out.


//so that concept which goes behind the finding of the left most occurance of 
//an element and then the right most element, is that we have to first find the 
//the left most element occurance, i.e the first occurance first

//so here is the code for the first most occurence of the element 


#include <iostream>
using namespace std;

int firstOcc(int arr[],int size, int key)
{
    int start = 0;
    int end = (size - 1);
    int mid = start + (end - start)/2;
    int ans = -1;
    int sum = 0;

    while(start<=end)
    {
        int mid = start + (end - start)/2;
        //it is important to put this over here and not at the end of the while loop 
        
        if(arr[mid]==key)
        {
            ans = mid;
            sum+=1;
            end = mid - 1;
        }

        else if(arr[mid]>key)
        {
            end = mid - 1;
        }

        else if(arr[mid]<key)
        {
            start = mid + 1;
        }
        

    }
    return ans;
}

int lastOcc(int arr[],int size, int key)
{
    int start = 0;
    int end = (size - 1);
    int mid = start + (end - start)/2;
    int ans = -1;
    int sum1 = 0;

    while(start<=end)
    {
        int mid = start + (end - start)/2;
        //it is important to put this over here and not at the end of the while loop 
        
        if(arr[mid]==key)
        {
            ans = mid;
            sum1+=1;
            start = mid + 1;
        }

        else if(arr[mid]>key)
        {
            end = mid - 1;
        }

        else if(arr[mid]<key)
        {
            start = mid + 1;
        }
        

    }
    return ans;
}

int main()
{
    int arr[6]{1, 1, 2, 3, 3, 5};
    int size = 6;
    int key = 3;
    

    int ans = firstOcc(arr, size, key);
    if (ans != -1)
    {
        cout << "first occurrence is at index: " << ans << endl;
    }
    else
    {
        cout << "Key not found in the array." << endl;
    }

    int ans1 = lastOcc(arr, size, key);
    if (ans1 != -1)
    {
        cout << "last occurrence is at index: " << ans1 << endl;
    }
    else
    {
        cout << "Key not found in the array." << endl;
    }

    return 0;
}



//trust me, this a legendary code, because it deals with such a simple yet 
//tricky topic.


//creation of a pair 
//pair <int,int> p;
//p.first=firstOcc(arr,size,key)
//p.last=lastOcc(arr,size,key)



//this is a code made by myself, which gives the total number of occurances of
//the given element



#include <iostream>
using namespace std;

int firstOcc(int arr[],int size, int key)
{
    int start = 0;
    int end = (size - 1);
    int mid = start + (end - start)/2;
    int ans = -1;
    int sum = 0;

    while(start<=end)
    {
        int mid = start + (end - start)/2;
        //it is important to put this over here and not at the end of the while loop 
        
        if(arr[mid]==key)
        {
            ans = mid;
            sum+=1;
            end = mid - 1;
        }

        else if(arr[mid]>key)
        {
            end = mid - 1;
        }

        else if(arr[mid]<key)
        {
            start = mid + 1;
        }
        

    }
    return sum;
}

int lastOcc(int arr[],int size, int key)
{
    int start = 0;
    int end = (size - 1);
    int mid = start + (end - start)/2;
    int ans = -1;
    int sum1 = 0;

    while(start<=end)
    {
        int mid = start + (end - start)/2;
        //it is important to put this over here and not at the end of the while loop 
        
        if(arr[mid]==key)
        {
            ans = mid;
            sum1+=1;
            start = mid + 1;
        }

        else if(arr[mid]>key)
        {
            end = mid - 1;
        }

        else if(arr[mid]<key)
        {
            start = mid + 1;
        }
        

    }
    return sum1;
}

int main()
{
    int arr[8]={1,1,2,2,2,3,4,4};
    int size = 8;
    int key = 4;

    int summ = firstOcc(arr,size,key);
    int summ1 = lastOcc(arr,size,key);

    cout<<"the number of occurances are "<<(summ+summ1)-1<<endl;
    //we have to do a minus 1 here because, you see, we will have added the arr[mid] occuranec twice into sum and sum1

    return 0;
}


//or the most easiest way is to do (lastOcc - firstOcc) + 1 *******