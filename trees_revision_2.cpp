//max time taken in deletion is O(log n)

#include <iostream>
using namespace std;

class heap
{
    int* arr = new int;
    int size;
    
    public:
    heap()
    {
        this->arr[0] = -1;
        this->size = 0;
    }
    
    //now we're going to write the algortihm for deletion of a node
    
    void del()
    {
        if(size==0)
        {
            cout<<"aint nothing to delete boy"<<endl;
        }
        else
        {
            arr[1] = arr[size];
            size--;
            
            int i =1;
            while(i<size)
            {
                int right = i*2;
                int left = (i*2)+1;
                
                if(left<size && arr[i]<arr[left])
                {
                    swap(arr[i],arr[left]);
                    i = left;
                }
                else if(right<size && arr[i]<arr[right])
                {
                    swap(arr[i],arr[right]);
                    i = right;
                }
                else
                {
                    return;
                }
            }
        }
    }
                
        
    
    
    void insert(int val)
    {
        size+=1;
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
    heap h;
    cout<<"how many elements would you like to insert in the heap"<<endl;
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cout<<"enter"<<endl;
        int num;
        cin>>num;
        h.insert(num);
    }
    
    h.print();
    
    cout<<endl;
    cout<<"now deleting"<<endl;
    h.del();
    
    h.print();
    
}

// int main()
// {
//     //int a[5];
//     heap h;
//     h.insert(34);
//     h.insert(21);
//     h.insert(87);
//     h.insert(53);
//     h.print();
// }




