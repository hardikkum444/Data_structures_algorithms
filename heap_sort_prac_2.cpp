//now we will try to do the heapsort insertion and deletion algorithms

#include <iostream>
using namespace std;

class heap
{
    public:
    int size;
    int arr[100];
    
    heap()
    {
        arr[0] = -1;
        size =-1;
    }
    
    void insert(int d)
    {
        size+=1;
        int index = size;
        arr[index] = d;
        
        while(index>0)
        {
            int parent = index/2;
            
            if(arr[parent] <arr[index])
            {
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }
    
    void del()
    {
        if(size==0)
        {
            cout<<"nothing to delete"<<endl;
        }
        else
        {
            swap(arr[0],arr[size]);
            size--;
            
            int i=0;
            while(i<=size)
            {
                int left = 2*i +1;
                int right = 2*i +2;
                
                if(left<size && arr[i]<arr[left])
                {
                    swap(arr[i],arr[left]);
                }
                if(right<size && arr[i]<arr[right])
                {
                    swap(arr[i],arr[right]);
                }
                else
                {
                    return;
                }
            }
        }
    }

    
    
    void print()
    {
        for(int i=1;i<=size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};


int main()
{
    //int a[5];
    heap h;
    h.insert(34);
    h.insert(21);
    h.insert(87);
    h.insert(53);
    h.print();

    h.del();
    h.print();
}       