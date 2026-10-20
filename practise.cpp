#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 1, 2};
    map<int, int> mp;
    for (auto i : arr)
    {
        mp[i]++;
    }
    for (auto i : mp)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}
