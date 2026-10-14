#include <bits/stdc++.h>
using namespace std;
 
void insertionSort(vector<int> &vc, int n)
{
    int minIndex = 0;
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int key = vc[i];
        while (j >= 0 && key < vc[j])
        {
            vc[j + 1] = vc[j];
            j--;
        }
        vc[j + 1] = key;
         
    }
}

int main()
{
    vector<int> vc = {12, 3, 4, 5, 2, 1};
    insertionSort(vc, vc.size());
    for (int i : vc)
    {
        cout << i << " ";
    }
    return 0;
}