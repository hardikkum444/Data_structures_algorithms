// important array arithmatic formula
// array[0] = memory loaction(say 100) + 0 * sizeof(data type)
// array[1] = memory loaction(say 100) + 1 * sizeof(data type)
// array[2] = memory loaction(say 100) + 2 * sizeof(data type)
// array[3] = memory loaction(say 100) + 3 * sizeof(data type)

// say if you want to make an array of size 100 and want 1 to be in all the spaces, we
// would need to use the fill_n command

// #include <iostream>
// using namespace std;

// int main(){

//     int array[100];
//     fill_n(array,100,2);

//     for(int i = 0; i< 5; i++){
//         cout<<array[i]<<endl;
//     }
    
//     return 0;

// }


// you can create an array of n size, but it is not necessary to add all the value, you can add as many values
// as you want, create an array of size 100 and its legal to give only two values to it, rest of the array becomes 0



// printing array with the help of functions (*very important*):
#include <iostream>
using namespace std;

void printarray(int arr[], int size)
{    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){

    int first[4]={1,2,3,4};
    printarray(first,4);
}


// you see you can easily find the size of an array using the formula
// sizeof(arr[])/sizeof(datatype)
// but here the thing is that of you have an array of size 10 and you have only given 2 values
// then your answer should be (20/2 =2) but acc to the formula you will get (100/10=10)







