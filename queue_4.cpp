//STL used on dequeue

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    deque <int> d;
    d.push_front(4);
    d.push_front(10);
    
    cout<<d.front()<<endl; 
    cout<<d.back()<<endl;
    
    d.push_back(100);
    cout<<d.back()<<endl;
    
    d.pop_front();
    cout<<d.front()<<endl;
    d.pop_front();
    
    cout<<d.front()<<endl;
    
    d.pop_back();
    if(d.empty())
    {
        cout<<"queue is empty"<<endl;
    }
    else
    {
        cout<<"queue still has some elements"<<endl;
    }

}