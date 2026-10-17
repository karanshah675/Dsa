
#include <bits/stdc++.h>
using namespace std;

// Merge two sorted subarrays:
// Left subarray  = vc[st ... mid]
// Right subarray = vc[mid+1 ... end]
void merge(vector<int> &vc, int st, int mid, int end)
{
    vector<int> arr; // Temporary array to store merged elements

    int i = st;      // Pointer for the left subarray
    int j = mid + 1; // Pointer for the right subarray

    // Compare elements from both subarrays
    // and insert the smaller element into arr
    while (i <= mid && j <= end)
    {
        if (vc[i] <= vc[j])
        {
            arr.push_back(vc[i]);
            i++;
        }
        else
        {
            arr.push_back(vc[j]);
            j++;
        }
    }

    // Copy any remaining elements from the right subarray
    while (j <= end)
    {
        arr.push_back(vc[j]);
        j++;
    }

    // Copy any remaining elements from the left subarray
    while (i <= mid)
    {
        arr.push_back(vc[i]);
        i++;
    }

    // Copy the sorted elements back into the original vector
    // Start from index st, not index 0
    for (int i = 0; i < arr.size(); i++)
    {
        vc[i + st] = arr[i];
    }
}

// Recursively divide the array and sort each half
void mergeSort(vector<int> &vc, int st, int end)
{
    // Base case: a single element (or empty range) is already sorted
    if (st < end)
    {
        // Find the middle index safely
        int mid = st + (end - st) / 2;

        // Divide and sort the left half
        mergeSort(vc, st, mid);

        // Divide and sort the right half
        mergeSort(vc, mid + 1, end);

        // Merge both sorted halves
        merge(vc, st, mid, end);
    }
}

int main()
{
    vector<int> vc = {12, 3, 22, 1, 2};

    int st = 0;
    int end = vc.size() - 1;

    // Sort the entire vector
    mergeSort(vc, st, end);

    // Print the sorted vector
    for (auto i : vc)
    {
        cout << i << " ";
    }

    return 0;
}

// Output: 1 2 3 12 22
// Case	Complexity
// Worst-case time	O(n log n)
// Auxiliary space (O(n))
// Recursion stack	(O(log n))