#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 3, 7, 8, 3, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int elementRemove = 3;
    int index = 0;

    for (int i = index; i < n - 1; i++)
    {
        if (arr[i] == elementRemove)
        {
            for (int j = i; j < n - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            index++;
        }
    }
    n-=index;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}