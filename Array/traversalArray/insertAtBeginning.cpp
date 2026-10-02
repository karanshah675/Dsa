// shift all elements to right side by 1 and add at index 0
#include <bits/stdc++.h>
using namespace std;

void addBeginning(int arr[],int n,int value)
{
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = value;
}
int main()
{
    int arr[5] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    addBeginning(arr,n, 7);
    for (int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}