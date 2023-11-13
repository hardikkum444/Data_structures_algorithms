//insertion and deletion in heaps

//full corrected code

#include <iostream>
using namespace std;

class heap
{
    public:
    int arr[100];
    int size;
    
    heap()
    {
        this->size = -1;
        arr[0] = -1;
    }
    
    void insert(int d)
    {
        size++;
        int index = size;
        arr[index] = d;
        
        while(index>=1)
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
    
    void del()
    {
        if(size == -1)
        {
            cout<<"nothing to delete"<<endl;
        }
        swap(arr[0],arr[size]);
        size--;
        int i =0;
        
        while(i<=size)
        {
            int left = 2 * i + 1;
            int right = 2 * i + 2;
            int largest = i;

            if (left <= size && arr[left] > arr[largest])
            {
                largest = left;
            }
            if (right <= size && arr[right] > arr[largest])
            {
                largest = right;
            }

            if (largest != i)
            {
                swap(arr[i], arr[largest]);
                i = largest;                    //so that it repeats for i
            }
            else
            {
                return;
            }
        }
    }
    
    void print()
    {
        for(int i =0;i<=size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
};

int main()
{
    heap h1;
    h1.insert(34);
    h1.insert(24);
    h1.insert(12);
    h1.insert(89);
    h1.insert(78);
    
    h1.print();
    
    h1.del();
    
    h1.print();
    
    
}














