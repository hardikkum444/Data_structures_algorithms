//first we will leran the code to merge two sorted arrays

#include <iostream>
#include <vector>
using namespace std;

void merge(int arr1[],int size1, int size2,int arr2[],int arr3[])
{
    int i = 0;
    int j = 0;
    //vector <int> ans; if we take arr3[] in input then we dont need this extra array memory space 
    int k =0;

    while(i<size1 && j<size2)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else if(arr1[i]>arr2[j])
        {
            arr3[k++] = arr2[j++];
        }
    }

    //as soon as i or j value exceeds the size value, that case
    //the while loop stops and then executes the following while loops.
    
    while(i<size1)
    {
        arr3[k++] = arr1[i++];
    }

    while(j<size2)
    {
        arr3[k++] = arr2[j++];
    }

    //return arr3;

}

int main()
{
    int arr1[4] = {1,2,7,8};
    int arr2[3] = {3,4,6};
    int arr3[7] = {0};

    merge(arr1,4,3,arr2,arr3);
    
    for(int i=0;i<7;i++)
    {
        cout<<arr3[i]<<" ";
    }
    cout<<endl;

}


//in case, the question consists of the two sorted elements having


// The key advantage of merging from the end to the beginning is that 
// you can do it in-place without requiring additional memory or shifting 
// elements. When you compare elements from both arrays and place the larger 
// element in the last available position, you avoid overwriting elements in 
// the first part of the array, which have already been processed. This approach
//  ensures that you don't lose any elements from nums1 during the merging process.


#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m - 1; // Index for the last element in nums1
    int j = n - 1; // Index for the last element in nums2
    int k = m + n - 1; // Index for the merged array

    // Merge elements from the end to the beginning
    while (i >= 0 && j >= 0) {
        if (nums1[i] >= nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        } else {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }

    // If there are remaining elements in nums2, copy them to nums1
    while (j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}

int main() {
    vector<int> nums1 = {1, 2, 3, 0, 0, 0}; // Initialize with zeros for extra space
    int m = 3;
    vector<int> nums2 = {2, 5, 6};
    int n = 3;

    merge(nums1, m, nums2, n);

    for (int i = 0; i < m + n; i++) {
        cout << nums1[i] << " ";
    }
    cout << endl;

    return 0;
}