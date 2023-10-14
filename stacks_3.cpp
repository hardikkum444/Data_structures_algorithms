#include <iostream>
using namespace std;

class stack
{
    public:
    int size;
    int top1;
    int top2;
    int* arr;

    stack(int size)
    {
        this->size = size;
        top1 = -1;
        top2 = size;
        arr = new int[size];
    }


    void push1(int x)
    {
        if(top2 - top1 > 1)
        {
            top1++;
            arr[top1] = x;
        }
        else
        {
            cout<<"stack overflow"<<endl;
        }
    }

    void push2(int y)
    {
        if(top2 - top1 > 1)
        {
            top2--;
            arr[top2] = y;
        }
        else
        {
            cout<<"stack overflow"<<endl;
        }
    }

    int pop1()
    {
        int ans =-1;
        if(top1>=0)
        {
            ans = arr[top1];
            top1--;
        }
        else
        {
           
            cout<<"stack is empty"<<endl;
            
        }
        return ans;
    }

    int pop2()
    {
        int ans = -1;
        if(top2<size)
        {
            ans = arr[top2];
            top2++;
        }
        else
        {
           
            cout<<"stack is empty"<<endl;
            
        }
        return ans;
    }

};

int main()
{
    stack st(5);
    st.push1(1);
    st.push1(2);
    st.push1(3);

    st.push2(44);
    st.push2(55);
    st.push2(56);

    cout<<st.pop1()<<endl;
    cout<<st.pop2()<<endl;
}


