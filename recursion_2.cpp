//recursive function for calculating the power of 2

#include <iostream>
using namespace std;

int powerOfTwo(int num)
{
    if (num == 0)
    {
        return 1;
    }
    
    return 2 * powerOfTwo(num-1);
}

int main()
{
    int num = 3;
    int ans = powerOfTwo(num);
    cout<<ans<<endl;
}