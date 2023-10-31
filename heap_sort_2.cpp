//basically for the index of the left node use 2*index
//and for the right node use (2*index+1)
//parent index = i/2


#include <iostream>
using namespace std;

class heap
{
    public:
    int arr[100];
    int size;
    
    public:
    heap()
    {
        arr[0] = -1;
        size = 0;
    }
    
    void insert(int val)
    {
        size = size+1;
        int index = size;
        arr[index] = val;
        
        while(index>1)
        {
            int parent = index/2;
            
            if(arr[parent]<arr[index])
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
}




