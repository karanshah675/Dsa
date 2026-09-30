#include <bits/stdc++.h>
using namespace std;

int main() {
     // Multiset allows duplicate elements
    // Elements are sorted

    multiset<int> ms;

    ms.insert(10);
    ms.insert(10);
    ms.insert(20);

    // Output: 10 10 20
    for (int x : ms)
    {
        cout << x << " ";
    }
    cout << endl;

    // Erases ALL occurrences of 10
    ms.erase(10);

    // To erase only ONE occurrence:
    // ms.erase(ms.find(10));
    return 0;
}