//lets make the heapify algorithm again 


#include <iostream>
using namespace std;

void heapify(int a[],int n,int i)
{
    int largest = i;
    int left = 2*i +1;
    int right = 2*i +2;
    
    if(left<n && a[left]>a[largest])
    {
        largest = left;
    }
    if(right<n && a[right]>a[largest])
    {
        largest = right;
    }
    if(largest!= i)
    {
        swap(a[largest],a[i]);
        heapify(a,n,largest);
    }
}

void heapsort(int arr[],int n)
{
    for(int i=n-1;i>0;i--)
    {
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
}

int main()
{
    int arr[6] = {50,52,49,55,54,53};
    int n =6;
    
    for(int i=n/2 -1;i>=0;i--)
    {
        heapify(arr,n,i);
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    heapsort(arr,n);
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



// #include <iostream>
// using namespace std;

// void heapify(int a[], int n, int i) {
//     int largest = i;
//     int left = 2 * i + 1;
//     int right = 2 * i + 2;

//     if (left < n && a[left] > a[largest]) {
//         largest = left;
//     }
//     if (right < n && a[right] > a[largest]) {
//         largest = right;
//     }
//     if (largest != i) {
//         swap(a[largest], a[i]);
//         heapify(a, n, largest);
//     }
// }

// void heapsort(int arr[], int n) {
//     for (int i = n - 1; i > 0; i--) {
//         swap(arr[0], arr[i]);
//         heapify(arr, i, 0);  // <-- Start the heapify from index 0
//     }
// }

// int main() {
//     int arr[6] = {50, 52, 49, 55, 54, 53};
//     int n = 6;

//     for (int i = n / 2 - 1; i >= 0; i--) {
//         heapify(arr, n, i);
//     }

//     cout << "Max Heap: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     heapsort(arr, n);

//     cout << "Sorted Array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
