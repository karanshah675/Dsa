#include <bits/stdc++.h>
using namespace std;

int main() {
       // Unique elements
    // NOT sorted
    // Average search/insert/delete = O(1)

    unordered_set<int> us;

    us.insert(30);
    us.insert(10);
    us.insert(20);

    // Search
    if (us.find(20) != us.end())
    {
        cout << "Found" << endl;
    }
    return 0;
}