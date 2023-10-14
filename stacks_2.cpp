//making a code for stacks without using STL concepts
//making it from scrap 

#include <iostream>
using namespace std;

class st 
{
    public:
    int* arr;
    int size;
    int top;

    st(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int x)
{
    if(size-top>1)  
//because, size = 5 , in arr terms is 4; therefore if size is 5 and top is 4, they are basically at the same position 
    {
        top++;
        arr[top] = x;
    }
    else
    {
        cout<<"st overflow"<<endl;
    }
}

void pop()
{
    if(top>=0)
    {
        top--;
    }
    else
    {
        cout<<"st underflow"<<endl;
    }
}

int peek()
{
    if(top>=0)
    {
        return arr[top];
    }
    else
    {
        cout<<"st is empty"<<endl;
        return -1;
    }
}

bool isEmpty()
{
    if(top<0 || top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void display()
{
    if(top>=0)
    {
        for(int i =top;i>=0;i--)
            {
                cout<<arr[i]<<" ";  //this part is important because, i taught me that the top element always goes to the end, thats why we have to start from the end when we wat to travers!
            }
    }
    cout<<endl;
}
};




int main()
{
    st hardik(5);

    hardik.push(5);
    hardik.push(11);
    hardik.push(23);
    hardik.push(23);
    hardik.push(23);
    hardik.push(23);

    cout<<hardik.peek()<<endl;
    
    hardik.pop();

    cout<<hardik.peek()<<endl;

    hardik.pop();

    cout<<hardik.peek()<<endl;

    if(hardik.isEmpty())
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        cout<<"stack ain't empty"<<endl;
    }

    hardik.pop();

    cout<<hardik.peek()<<endl;

    if(hardik.isEmpty())
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        cout<<"stack ain't empty"<<endl;
    }





}
