//using stl for queue 
//it is important to remember that queue follows FIFO and stacks follow LIFO
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue <int> q;
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    
    q.pop();
    
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
}



//basic syntax for development of a queue without using STL


//front will always be pointing to the element
//rear will always be one step ahead of the element


#include <iostream>
using namespace std;

class queue
{
    public:
    int* arr;
    int size;
    int front;
    int rear;
    
    queue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;   
    }
    
    void push(int d)
    {
        if(rear == size)
        {
            cout<<"queue is empty"<<endl;
        }
        else
        {
            arr[rear] = d;
            rear++;
        }
    }
    
    int pop()
    {
        int ans;
        if(front == rear)
        {
            cout<<"queue is empty, nothing to pop"<<endl;
            return -1;
        }
        else
        {
            ans = arr[front];
            arr[front] = -1;
            front++;
            if(front == rear)
            {
                front = 0;
                rear = 0;
            }
        }
        return ans;
    }
    
    int frontElement()
    {
        int ans;
        if(front == rear)
        {
            cout<<"queue is empty, nothing to display"<<endl;
            return -1;
        }
        else
        {
            ans = arr[front];
        }
        return ans;
    }
    
    int backElement()
    {
        int ans;
        if(front == rear)
        {
            cout<<"queue is empty, nothing to display"<<endl;
            return -1;
        }
        else
        {
            ans = arr[rear-1];  
        }
        return ans;
    }
    
    bool isEmpty()
    {
        if(rear==front)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
    
    
    
};

int main()
{
    queue q(5);
    
    q.push(9);
    q.push(44);
    q.push(69);
    
    
    cout<<"the element present at first is: "<<q.frontElement()<<endl;
    cout<<"the element at the start being popped is: "<<q.pop()<<endl;
    cout<<"the element present at first is: "<<q.frontElement()<<endl;
    cout<<"the element present at back is: "<<q.backElement()<<endl;
    
    bool empty = q.isEmpty();
    if(empty)
    {
        cout<<"your queue is empty"<<endl;
    }
    else
    {
        cout<<"your queue is not empty"<<endl;
    }
    
    q.pop();
    q.pop();
    //q.pop();
    
    //bool empty = q.isEmpty();
    empty = q.isEmpty();
    if(empty)
    {
        cout<<"your queue is empty"<<endl;
    }
    else
    {
        cout<<"your queue is not empty"<<endl;
    }
}




















