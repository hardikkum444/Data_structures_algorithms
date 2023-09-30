// to create a program which gives the maximum and minium values entered into 
// an array

// #include <iostream>
// using namespace std;

// // void print_array(int num[], int size)
// // {
// //     for(int i=0;i<size;i++)
// //     {
// //         cout<<num[i]<<endl;
// //     }
// // }


// void max(int num[], int size)
// {
//     int mini= __WINT_MIN__;
//     for(int i=0;i<=size;i++)
//     {
//         if(num[i]> mini)
//         {
//             mini=i;
//         }
//     }
//     cout<<"maximum elemnt is: "<<mini<<endl;


// }

// void min(int num[], int size)
// {
//     int min1= __INT_MAX__;
//     for(int i=0;i<=size;i++)
//     {
//         if(num[i]< min1)
//         {
//             min1=i;
//         }
//     }
//     cout<<"minimum elemnt is: "<<min1<<endl;

// }



// int main(){

//     int n[100];
//     int size;

//     cout<<"enter the size of your array: "<<endl;
//     cin>>size;

//     for(int i=0;i<size;i++){
    
//         cin>>n[i];
//     }

//     //print_array(n,size);
//     max(n,size);
//     min(n,size);

//     return 0;

// }


// Simple game based on the above concept 

// #include <iostream>
// using namespace std;

// void print_array(int num[], int size)
// {
//     for(int i=0;i<size;i++)
//     {
//         cout<<num[i]<<endl;
//     }
// }


// void max(int num[], int size)
// {
//     cout<<"What do you think the biggest element in your array is?"<<endl;
//     int ans;
//     cin>>ans;
    
//     int mini= __WINT_MIN__;
//     for(int i=0;i<=size;i++)
//     {
//         if(num[i]> mini)
//         {
//             mini=i;
//         }
//     }

//     if (ans == mini){
//         cout<<"great you have entered the right value "<<mini<<endl;}
//     else{
//         cout<<"you have got it wrong, the max element is: "<<mini<<endl;
//     }


// }
    

// void min(int num[], int size)
// {   
//     cout<<"What do you think the least element in your array is?"<<endl;

//     int ans;
//     cin>>ans;
//     int min1= __INT_MAX__;
//     for(int i=0;i<=size;i++)
//     {
//         if(num[i]< min1)
//         {
//             min1=i;
//         }
//     }
//     if (ans == min1){
//         cout<<"great you have entered the right value "<<min1<<endl;}
//     else{
//         cout<<"you have got it wrong, the min element is: "<<min1<<endl;
//     }

// }





// int main(){

//     int n[100];
//     int size;

//     cout<<"enter the size of your array: "<<endl;
//     cin>>size;

//     for(int i=0;i<size;i++){
        
//         cout<<"please enter the "<<(i+1)<<" element"<<endl;
//         cin>>n[i];
//     }

//     //print_array(n,size);
//     max(n,size);
//     min(n,size);

//     return 0;

// }



#include <iostream>
using namespace std;

// void print_array(int num[], int size)
// {
//     for(int i=0;i<size;i++)
//     {
//         cout<<num[i]<<endl;
//     }
// }





// you can do the same using inbuilt functions of c++




void max(int num[], int size)
{
    int mini= __WINT_MIN__;

    
    for(int i=0;i<=size;i++)
    {
        mini = max(mini,num[i]);
    }
    cout<<"maximum element is: "<<mini<<endl;


}

void min(int num[], int size)
{
    int min1= __INT_MAX__;
    for(int i=0;i<=size;i++)
    {
        if(num[i]< min1)
        {
            min1=i;
        }
    }
    cout<<"minimum elemnt is: "<<min1<<endl;

}



int main(){

    int n[100];
    int size;

    cout<<"enter the size of your array: "<<endl;
    cin>>size;

    for(int i=0;i<size;i++){
    
        cin>>n[i];
    }

    //print_array(n,size);
    max(n,size);
    min(n,size);

    return 0;

}

