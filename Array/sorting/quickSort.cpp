#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int st, int end)
{
    int pindex = st;
    int pivot = arr[end];
    for (int j = st; j < end; j++)
    {
        if (arr[j] <= pivot)
        {
            swap(arr[j], arr[pindex]);
            pindex++;
        }
    }
     
    swap(arr[pindex], arr[end]);
    return pindex;
}
void quickSort(vector<int> &arr, int st, int end)
{
    if (st < end)
    {
        int pIndex = partition(arr, st, end);
        quickSort(arr, st, pIndex - 1);
        quickSort(arr, pIndex + 1, end);
    }
}
int main()
{
    vector<int> vc = {1,2,3,4,5};

    int st = 0;
    int end = vc.size() - 1;
    quickSort(vc, st, end);
    for (auto i : vc)
    {
        cout << i << " ";
    }
    return 0;
}