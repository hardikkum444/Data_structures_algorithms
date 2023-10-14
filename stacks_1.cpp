//in stack LIFO is maintained 
//operations on stack
//1) push 
//2) pop
//3) peak (looking from birds eye view, which element will you end up seeing)
//4) empty (checks whether the underlying container is empty or not, returns boolian value)

//STL creation of stack: stack<int> stack_name

//simple stack code

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(4);
    s.push(2);

    cout<<"the topmost element in stack right now is: "<<s.top()<<endl;

    s.pop();

    cout<<"the topmost element in stack right now is: "<<s.top()<<endl;

    if(s.empty())
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        cout<<"stack is not empty"<<endl;
    }


    cout<<"size of stack is: "<<s.size()<<endl;
    
    return 0;


}
