#include <bits/stdc++.h>
using namespace std;

int main() {
        // Set:
    // 1. Stores unique elements
    // 2. Stores elements in sorted order

    set<int> st;

    st.insert(30);
    st.insert(10);
    st.insert(20);
    st.insert(10);  // Duplicate - ignored

    for (int x : st)
    {
        cout << x << " ";
    }
    // Output: 10 20 30

    cout << endl;

    // Search element
    if (st.find(20) != st.end())
    {
        cout << "Found" << endl;
    }

    // Count
    cout << st.count(20) << endl;  // 1

    // Delete
    st.erase(20);

    return 0;
}