#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 2, 4};
    int n = nums.size();
    int count = 1;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[nums[i]]++;
        if (nums[i] == 1)
        {
            count = 0;
        }
    }
    for (auto i : mp)
    {
        if (i.second > 2 && count == 0)
        {
            cout << i.first << " " << i.second << endl;
        }
    }

    return 0;
}