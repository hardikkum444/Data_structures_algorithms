//and now we shall be using cpp concepts to make the algo opeartions for stack
//and i also made a display function which basically prints all the elements present in the stack
#include <iostream>
using namespace std;

class Stack
{
    public:
    int size;
    int* arr;
    int top;
    
    Stack(int s)
    {
        this->size = s;
        arr = new int[s];
        top = -1;
    }
void push(int d)
{
    if(size-top>1)
    {
        top++;
        arr[top] = d;
    }
    else
    {
        cout<<"stack overflow"<<endl;
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
        cout<<"stack is empty"<<endl;
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
        cout<<"stack is empty"<<endl;
        return -1;
    }
}

bool isEmpty()
{
    if(top>0)
    {
        return false;
    }
    return true;
}

void display()
{
    int bol = top;
    while(bol>=0)
    {
        cout<<arr[bol--]<<" ";
    }
    cout<<endl;
}

};



int main()
{
    Stack s(5);
    s.push(3);
    s.push(4);
    cout<<s.peek()<<endl;
    s.display();
    
    s.push(34);
    s.push(33);
    s.push(32);
    
    s.display();
}

