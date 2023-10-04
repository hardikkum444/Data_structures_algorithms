//creation of a dynamic memory allocation program


#include <iostream>
using namespace std;

int getSum(int *arr, int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}




int main()

{
    int j;
    cin>>j;

    int *arr = new int[j];

    for(int i = 0; i<j ;i++)
    {
        cin>>arr[i];
    }

    int ans = getSum(arr,j);
    cout<<ans<<endl;

}


