//scopes in arrays

// #include <iostream>
// using namespace std;

// void print_a(int num[],int size)
// {   
//     num[0]={200};
//     for(int i=0;i<size;i++)
//     {
//         cout<<num[i]<<endl;
//     }
// }

// int main()
// {
//     int n[3]={1,2,3};

//     print_a(n,3);

//     for(int i=0;i<3;i++)
//     {
//         cout<<n[i]<<endl;
//     }


//     return 0;
// }


//so from this example you will notice that, both for num and for n arrays
//the value of the 0th index is getting chnaged to 200, but why?

//this is because, when you execute this code, the address of the array 
//in the main function is given to the array in the definin of the function 



//to create a code which displays the sum of all the elements in the
//array 



#include <iostream>
using namespace std;

void add_arr(int n[], int s)
{
    int sum=0;
    for(int i=0;i<s;i++)
    {
        sum+=n[i];
    }
    cout<<"The addition of all the elements in your array is: "<<sum<<endl;

}

int main()
{
    int size;
    int arr[100];


    cout<<"how many elements would you like to have in your array?"<<endl;
    cin>>size;

    cout<<"please enter the elements for your array"<<endl;
    
    for(int i=0;i<size;i++)
    {
        cout<<"please enter the "<<(i+1)<<"th element: "<<endl;
        cin>>arr[i];
    }

    add_arr(arr,size);


    return 0;

}






