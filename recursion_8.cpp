//recursive code to reverse a string 
//very easy 

#include <iostream>
using namespace std;


void reverse(string &str, int i, int j)
{
    if(i>j)
    {
        return;
    }
    swap(str[i++],str[j--]);
    reverse(str,i,j);
}

int main()
{
    string str = "hardik";
    int size = str.size();
    reverse(str,0,size-1);
    
    cout<<str<<endl;
}

//slightly more optmized method

// #include <iostream>
// using namespace std;


// void reverse(string &str, int i)
// {
//     int j = str.length()-i-1;
//     if(i>j)
//     {
//         return;
//     }
//     swap(str[i++],str[(j)--]);
//     reverse(str,i);
// }

// int main()
// {
//     string str = "hardik";
//     int size = str.size();
//     reverse(str,0);
    
//     cout<<str<<endl;
// }
