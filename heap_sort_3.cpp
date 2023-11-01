//deletion in heap sort
//includes the following steps
//1)swap first root with last node (a[1] = a[n])
//2)remove last node
//3)porpagate to set the swapped node in the right postion, by comparing it to its children and then swaping until you come to the last swap

#include <iostream>
using namespace std;

class heap
{
    public:
    int size;
    int arr[100];

    heap()
    {
        this->arr[0] = -1;
        this->size = 0; 
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
            }
            else
            {
                return;
            }
        }
    }

    void deleteNode()
    {
        if(size==0)
        {
            cout<<"nothing to delete"<<endl;
            return;
        }
        //now to take last node and add it to first node

        arr[1] = arr[size];
        size--; //deletion

        //now to take root node to its correct position 
        int i =1;
        while(i<size)
        {
            int leftIndex = 2*i;
            int rightIndex = (2*i)+1;

            if(leftIndex<size && arr[i]<arr[leftIndex])
            {
                swap(arr[i],arr[leftIndex]);
                i = leftIndex;
            }
            else if(rightIndex<size && arr[i]<arr[rightIndex])
            {
                swap(arr[i],arr[rightIndex]);
                i = rightIndex;
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

    h.deleteNode();
    h.print();
}