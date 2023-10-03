#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};
    cout<<"address of the first variable is: "<<arr<<endl;

    int *ptr = &arr[0];

    cout<<"address of the first variable is: "<<ptr<<endl;
    cout<<"address of the first variable is: "<<&arr[0]<<endl;

    cout<<2[arr]<<endl;

    arr = arr + 1;
    cout<<"-->"<<arr<<endl;
    

    return 0;
}