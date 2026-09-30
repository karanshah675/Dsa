//pair takes two values
#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << "\n";

    pair<int, pair<int, int>> p2 = {1, {2, 4}};
    cout << p2.first << " " << p2.second.second << "\n";

    pair<int, int> arr[] = {{1, 3}, {2, 4}};
    for (pair<int, int> a : arr)
    {
        cout << a.first << " " << a.second<<"\n";
    }

    return 0;
}