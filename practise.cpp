#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    vector<int> oddSum;
    int sum = 0;
    oddSum.push_back(arr[0]);
    for (int i = 1; i < arr.size(); i++)
    {
        oddSum.push_back(arr[i - 1] + arr[i]);
        oddSum.push_back(arr[i]);
    }
    for (auto i : arr)
    {
        sum += i;
    }
    oddSum.push_back(sum);
    for (auto i : oddSum)
    {
        cout << i << " ";
    }
}