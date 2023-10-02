// this is basically the simple syntax of array using stl

#include <iostream>
#include <array>
using namespace std;

int main()
{
    int a[5]={1,2,3,4,5};

    array<int,4> b={22,33,44,55};
    
    // this is the size operation:
    int size = b.size();

    cout<<endl<<size<<endl<<endl;

    for(int i=0;i<size;i++)
    {
        cout<<b[i]<<endl;
    }

    // using at attribute

    cout<<"eleement at 3rd position is: "<<b.at(2)<<endl;

    // empty or not will return a boolian result

    cout<<b.empty()<<endl;

    // first element

    cout<<"your first element is: "<<b.front();

    // last element

    cout<<"last element: "<<b.back();


    return 0;

}

