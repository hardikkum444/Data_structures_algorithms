#include <iostream>
#include <array>
#include <bits/stdc++.h>
using namespace std;

// //left rotating array by one place 
// void rotate(int arr[],int n)
// {
//     int temp = arr[0];

//   for (int i = 1; i < n; i++) {
//     arr[i-1] = arr[i];
//   }
//   arr[n - 1] = temp; 
  
//   for (int i = 0; i < n; i++) {
//     cout << arr[i] << " ";
//   }
// }

// int main()
// {


//     int arr[5]={1,2,3,4,5};
//     int size = 5;

//     rotate(arr,size);

//     return 0;
// }


//making a algorithm, for input taken by user and then shifting cirularly 
//left or right


void left(int arr[],int size,int d)
{
    vector<int>temp(d-3);
    for(int i = 0;i<d;i++)
    {
        temp.push_back(arr[i]);
    }

    // for (int i=0;i<d;i++)
    // {
    //     cout<<temp[i]<<endl;
    // }

    for(int j =d;j<size;j++)
    {
        arr[j-d]=arr[j];
    }

    // for (int i = d; i < n; i++) {
    //     arr[i - d] = arr[i];
    // }


    //int w =0;

    for(int q =size-d;q<size;q++)
    {
        //arr[q-(size-d)]=temp[q];
        arr[q]=temp[q-(size-d)];
        //w++;
    }

    for (int r=0;r<size;r++)
    {
        cout<<arr[r]<<endl;
    }

}


int main()
{
    int arr[5]={1,2,3,4,5};
    int size = 5;
    int d = 3;

    left(arr,size,d);

    return 0;

}



