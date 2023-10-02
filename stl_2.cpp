// this one is about vectors 

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    
    cout<<"capacity-> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity-> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity-> "<<v.capacity()<<endl;
    
    v.push_back(3);
    cout<<"capacity-> "<<v.capacity()<<endl;
    // here 4 is printed instead of 3 as vector doubles its capacity 

    v.push_back(4);
    cout<<"capacity-> "<<v.capacity()<<endl;

    v.push_back(5);
    cout<<"capacity-> "<<v.capacity()<<endl;
    cout<<"size-> "<<v.size()<<endl;

    //as you can see size will show the number of elements
    //and capacity will show the actulal number of elements it can store

    //at function can be used

    cout<<"element at 4th position: "<<v.at(3)<<endl;

    //front and back can also be used to print the first and last numbers respectively
    cout<<"first-> "<<v.front()<<" last-> "<<v.back()<<endl;


    //using the pop_back function

    cout<<"before pop"<<endl;
    for(int i:v)
    {
        cout<<i;
    }cout<<endl;

    //look at the way i have used the for loop over here

    v.pop_back();

    cout<<"after pop"<<endl;
    for(int i:v)
    {
        cout<<i;
    }cout<<endl;

    // clearing the values from the vector

    cout<<"size before clearing-> "<<v.size()<<endl;
    cout<<"capacity before clearing-> "<<v.capacity()<<endl;

    v.clear();

    cout<<"size after clearing-> "<<v.size()<<endl;
    cout<<"capacity after clearing-> "<<v.capacity()<<endl;
    //it is important to note that, capacity does not change to 0 after clearing.   

    //another method of initialisation

    vector <int> a(5,1);
    //this will create an array with 5 elements, all 1.

}








