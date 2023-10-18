// You are using GCC
#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    
    for(int i =0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
}

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int count = 0;

    for (int i = low + 1; i <= high; i++) {
        if (arr[i] >= pivot) {
            count++;
        }
    }

    int index = low + count;
    swap(arr[low], arr[index]);

    int i = low;
    int j = high;

    while (i < index && j > index) {
        while (arr[i] >= arr[index]) {
            i++;
        }
        while (arr[j] < arr[index]) {
            j--;
        }
        if (i < index && j > index) {
            swap(arr[i], arr[j]);
        }
    }

    return index;
}

void quickSort(int arr[], int low, int high) {
    
    if(low>=high)
    {
        return;
    }
    int p = partition(arr,low,high);
    
    quickSort(arr,low,p-1);
    
    quickSort(arr,p+1,high);
    
}

int main() {
    int n;
    cin >> n;

    int *scores = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    quickSort(scores, 0, n - 1);
    printArray(scores, n);

    delete[] scores;
    return 0;
}