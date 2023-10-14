//implementing  stacks using linked lists 
//this code has been made by me and my brain cells, i modified some code 
//and made it easier and more optimized and pasted it here


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
        if(!temp)//checking if stack heap is full or not, we use this as we can add infinte nodes as we have derived node from dynamic memory alloc
        {
            cout<<"stack overflow!"<<endl;
        }

        temp->next = top;
        top = temp;
    }

    int peak()
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

    void pop()
    {
        node* temp;
        if(top!=NULL)
        {
            temp = top;
            top = top->next;

            delete temp;
        }
    }

    bool isEmpty()
    {
        if(top==NULL)
        {
            return 1;
        }
        return 0;
    }

    void display()
    {
        node* temp;
        if(top==NULL)
        {
            cout<<"nothing to display"<<endl;
        }
        else
        {
            temp = top;
            while(temp!=NULL)
            {
                cout<<temp->data;
                temp = temp->next;

                //totally unecessay step

                if(temp!=NULL)
                {
                    cout<<" -> ";
                }
            }
            cout<<endl;
        }
    }

    
};


int main()
{
    stack s;
 
    // Push the elements of stack
    s.push(11);
    s.push(22);
    s.push(33);
    s.push(44);

    cout<<s.peak()<<endl;

    //s.pop();

    cout<<s.peak()<<endl;

    s.display();

    cout<<s.peak()<<endl;


}
    