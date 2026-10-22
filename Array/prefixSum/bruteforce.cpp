#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 2, 4};
    int currSum = 0;
    int maxSum = 0;
    int k = 4;
    for (int st = 0; st < 4; st++)
    {
        currSum = 0;
        for (int end = st; end < 4; end++)
        {
            currSum += arr[end];
            if (currSum == k)
            {
                maxSum++;
            }
        }
    }
    cout << maxSum;
    return 0;
}