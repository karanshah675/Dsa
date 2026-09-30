#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Stores:

    // KEY -> VALUE

    // Example:

    map<string, int> mp;

    mp["Karan"] = 20;
    mp["Rahul"] = 21;

    // Access:

    cout << mp["Karan"];

    // Properties:
    // - Keys are UNIQUE
    // - Keys are sorted
    // - Operations usually O(log n)

    // Functions:

    // mp[key] = value;
    // mp.insert({key, value});
    // mp.erase(key);
    // mp.find(key);
    // mp.count(key);
    mp.size();
    mp.empty();
    mp.clear();

    // Example:

    map<int, string> mp;

    mp[1] = "Karan";
    mp[2] = "Rahul";

    // -----------------------------------------------------------
    // ITERATING MAP
    // -----------------------------------------------------------

    for (auto it : mp)
    {
        cout << it.first << " ";
        cout << it.second << endl;
    }

    return 0;
}