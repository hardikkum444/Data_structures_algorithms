//using stl for stack;

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack <int> s;
    s.push(4);
    s.push(3);
    s.push(1);
    s.push(45);
    
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    
    if(s.empty())
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        cout<<"stack is not empty"<<endl;
    }
    s.pop();
    s.pop();
    s.pop();
    //s,pop();
    if(s.empty())
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        cout<<"stack is not empty"<<endl;
    }
}



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


//now we shall move to implementation of stack using linked lists

#include <iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    
    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

class stack
{
    node* top = NULL;
    
    public:
    
    void push(int d)
    {
        node* temp = new node(d);
        if(!temp)
        {
            cout<<"stack overflow"<<endl;
        }
        else
        {
            temp->next = top;
            top = temp;
        }
    }
    
    void pop()
    {
        node* temp;
        if (top!=NULL)
        {
            temp = top;
            top = top->next;
        }
    }
    
    int peek()
    {
        if(top!=NULL)
        {
            return top->data;
        }
        else
        {
            return -1;
        }
    }
    
    void display()
    {
        node* temp;
        if(top==NULL)
        {
            cout<<"nothing to display"<<endl;
        }
        else{
        temp = top;
        while(temp!=NULL)
        {
            cout<<temp->data;
            temp = temp->next;
            
            if(temp!=NULL)
            {
                cout<<" -> ";
            }
        }
        cout<<endl;}
    }
    
    bool isEmpty()
    {
        if(top!=NULL)
        {
            return false;
        }
        return true;
    }
};


int main()
{
    stack s;
    s.push(3);
    s.push(42);
    s.push(34);
    s.push(12);
    
    cout<<s.peek()<<endl;
    s.display();
    
    s.pop();
    
    cout<<s.peek()<<endl;
    s.display();
    
    cout<<s.isEmpty()<<endl;
}


//and that concludes the basics revision for stacks, using arrays and linked lists



































