// //lets try and remake the tower of hanoi algorithm 

// #include <iostream>
// using namespace std;

// void toh(int s, int d, int h, int n, int &cnt)
// {
//     if(n==1)
//     {
//         cout<<"moving from "<<s<<" to "<<d<<endl;
//         cnt++;
//         return;
//     }
    
//     toh(s,h,d,n-1,cnt);
//     cout<<"moving from "<<s<<" to "<<d<<endl;
//     cnt++;
    
//     toh(h,d,s,n-1,cnt);
// }

// int main()
// {
//     int s = 1;
//     int h = 2;
//     int d = 3;
    
//     int cnt = 0;
//     int n = 5;
    
//     toh(s,d,h,n,cnt);
    
//     cout<<"total count: "<<cnt<<endl;
// }





#include <iostream>
using namespace std;

int toh(int d)
{
    if(d==1)
    {
        return 1;
    }
    else
    {
        return 2*toh(d-1) +1;
    }
}


int main()
{
    cout<<"how many disks do you have? "<<endl;
    int d;
    cin>>d;
    cout<<toh(d)<<endl;
}