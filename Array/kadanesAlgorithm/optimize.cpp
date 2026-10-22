// to optimize max subarray we use kadanes algorithm which will make time complexity O(n)
//  in this we simply change currsum value to 0 when we find that it is going -negative because if it is became nagative there is no chance of it became maximum
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, -2, 3, 4};
    int currSum = 0;
    int maxSum = INT_MIN;
    for (int st = 0; st < 4; st++)
    {
        currSum += arr[st];
        maxSum = max(currSum, maxSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    cout << maxSum;
    return 0;
}