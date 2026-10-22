#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 2, 4};
    int currSum = 0;
    // int maxSum = 0;
    int k = 4;
    int p[4];
    p[0] = arr[0];
    for (int i = 1; i < 4; i++)
    {
        p[i] = p[i - 1] + arr[i];
    }
    unordered_map<int, int> mp;
    for (int i = 0; i < 4; i++)
    {
        if (p[i] == k)
        {
            currSum++;
        }
        int val = p[i] - k;
        if (mp.find(val) != mp.end())
        {
            currSum += mp[val];
        }
        mp[p[i]]++;
    }
    cout << currSum;
    return 0;
}