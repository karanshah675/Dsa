#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vc = {1, 2, 3, 4, 5, 6};
    int target = 4;
    int low = 0;
    int high = vc.size() - 1;
    int mid = 0;
    
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (vc[mid] == target)
        {
            cout << "target founded at index " << mid;
            break;
        }
        if (vc[mid] < target)
        {
            low = mid + 1;
        }
        if (vc[mid] > target)
        {
            high = mid - 1;
        }
    }
    return 0;
}