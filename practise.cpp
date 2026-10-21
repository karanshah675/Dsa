#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 1, 2, 2, 2, 3, 3, 1};
    int currentVaue = 0;
    int maxValue;
    int maxLength;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] == arr[i - 1])
        {
            currentVaue++;
        }
        else
        {
            currentVaue = 1;
        }
        if (currentVaue > maxLength)
        {
            maxLength = currentVaue;
            maxValue = arr[i];
        }
    }
    return 0;
}
