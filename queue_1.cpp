//using stl for queues
//queue follow FIFO not like stacks which follow LIFO

//enqueue is nothing but push
//dequeue is nothing but pop

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(3);
    q.push(4);
    q.push(23);
    q.push(44);
    
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    
    cout<<"size of the queue is: "<<q.size()<<endl;
    
    cout<<q.empty()<<endl;
    
    q.pop();
    cout<<q.front()<<endl;
    cout<<"size of the queue is: "<<q.size()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    cout<<"size of the queue is: "<<q.size()<<endl;
    
    q.push(69);
    cout<<q.front()<<endl;
    
    q.push(23);
    cout<<q.front()<<endl;
    
}

//this code pretty mush explains the use of STL for queue!
