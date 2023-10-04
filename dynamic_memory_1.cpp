// #include <iostream>
// using namespace std;


// void update(int a)
// {
//     a+=1;
//     int b = a;
//     cout<<b<<endl;
// }

// int main()
// {
//   int hardik = 10;
//     update(hardik);

//     // cout<<b<<endl;

//     return 0;

// }

//from this example you will note that this is call by value and not call by 
//reference in which we use pointer to change the value
//therefore, 10 gets printed as the output of the above

#include <iostream>
using namespace std;


void update(int &a)
{
    a++;
}

int main()
{
  int hardik = 10;
    update(hardik);

    cout<<hardik<<endl;

    return 0; 

}

//int this example, we pass the address of the variable into it, that's why it actually 
//changes the value and prints 11 as output
//this is call by reference



