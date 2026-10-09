#include <bits/stdc++.h>
using namespace std; 
void swapd(vector<int> &arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void selectionSort(vector<int> &vc, int n)
{
    int minIndex = 0;
    for (int i = 0; i < n - 1; i++)
    {
        minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (vc[j] < vc[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            swapd(vc, minIndex, i);
        }
    }
}

int main()
{
    vector<int> vc = {12, 3, 4, 5, 2, 1};
    selectionSort(vc, vc.size());
    for (int i : vc)
    {
        cout << i << " ";
    }
    return 0;
}