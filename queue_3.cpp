//this is the code for insertion and deletion in circular queues

#include <iostream>
using namespace std;

class queue
{
    public:
    int size;
    int front;
    int rear;
    int* arr;
    
    queue(int size)
    {
        this->size = size;
        front= -1;
        rear = -1;
        arr = new int[size];
    }
    
    void push(int d)
    {
        if(front == 0 && rear == size || rear == (front-1)%(size-1))
        {
            cout<<"que is full"<<endl;
        }
        
        else if(front == -1)
        {
            front = rear = 0;
            //arr[rear] = d;//nice and clever, we use arr[front] instead of arr[rear] as rear is always onse step ahead
        }
        else if(rear == size-1 && front != 0)
        {
            rear = 0;
            //arr[rear] = d;
        }
        else
        {
            rear++;
            //arr[rear] = d;
        }
        arr[rear] = d;
        
    }
    
    void pop()
    {
        if(front == -1)
        {
            cout<<"queue is empty"<<endl;
        }
        else if(front == rear) //this is the case for when, only one element is present in your queue
        {
            front = rear = -1;
        }
        
        else if(front == size-1 )//popping with respect to front, if front is at last element
        {
            front = 0;
        }
        else 
        {
            front++;
        }
    }
};
            
            
            