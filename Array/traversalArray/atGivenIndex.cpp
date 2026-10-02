 
#include <bits/stdc++.h>
using namespace std;

void atIndex(int arr[],int n,int value,int index)
{
    for (int i = n - 1; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = value;
}
int main()
{
    int arr[5] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    atIndex(arr,n, 7,2);
    for (int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}