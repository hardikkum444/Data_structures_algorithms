//using stl of priorty queue for min heap and max heap and sorting

#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    //max heap
    
    priority_queue<int>pq;

    pq.push(23);
    pq.push(32);
    pq.push(34);
    pq.push(55);
    pq.push(90);

    cout<<"the topmost elemnt in the pq is: "<<pq.top()<<endl;

    pq.pop();

    cout<<"the topmost elemnt in the pq is: "<<pq.top()<<endl;


    vector<int>sorted;

    while(!pq.empty())
    {
        sorted.push_back(pq.top());
        pq.pop();
    }

    // The elements are in reverse order, so reverse the vector

    std::reverse(sorted.begin(),sorted.end());
    //std::reverse(sortedArray.begin(), sortedArray.end());

    cout<<"sorted"<<endl;
    for (int num : sorted) {
        std::cout << num << " ";
    }


    //with this you'll see that the topmost elemnt will be the largest element
    //therefore, priority queue is a max heap

    //min heap

    priority_queue<int , vector <int>, greater <int>> minheap;

    minheap.push(90);
    minheap.push(20);
    minheap.push(30);
    minheap.push(10);
    minheap.push(22);

    cout<<endl<<endl;
    cout<<"the topmost elemnt in the minheap is: "<<minheap.top()<<endl;

    minheap.pop();

    cout<<"the topmost elemnt in the minheap is: "<<minheap.top()<<endl;

}