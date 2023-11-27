// hashing charachters using arrays


//this is when there are only lowercase letters

// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     cout<<"enter your string: "<<endl;
//     string str;
//     cin>>str;
    
//     int hash[27]={0};
    
//     for(int i=0;i<str.size();i++)
//     {
//         hash[str[i]-'a']++;      //we did this over here so that we can map char with the propeer index of the arr, like ascci a = 97, therefore, 'a'-'a' = 0 ; which maps to 0 index of hash array
//     }
    
//     cout<<"queries: "<<endl;
//     int q;
//     cin>>q;
//     while(q--)
//     {
//         cout<<"which letter freq? "<<endl;
//         char num;
//         cin>>num;
    
//         cout<<hash[num-'a']<<endl;
//     }
// }


//and this is when, the string may consist of both capital and small letters


#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout<<"enter your string: "<<endl;
    string str;
    cin>>str;
    
    int hash[256]={0};
    
    for(int i=0;i<str.size();i++)
    {
        hash[str[i]]++;
    }
    
    cout<<"queries: "<<endl;
    int q;
    cin>>q;
    while(q--)
    {
        cout<<"which letter freq? "<<endl;
        char num;
        cin>>num;
    
        cout<<hash[num]<<endl;
    }
}