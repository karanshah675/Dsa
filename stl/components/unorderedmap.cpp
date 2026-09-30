#include <bits/stdc++.h>
using namespace std;

int main()
{
    //     Properties:
    // - Key-value pair
    // - Keys are unique
    // - NOT sorted
    // - Average O(1)

    unordered_map<string, int> mp;

    mp["Karan"] = 20;

    // Functions:

    mp.find(key);
    mp.erase(key);
    mp.count(key);
    return 0;
}