// we use kadanes algorithm to find max sum from sub array
//  sub array is countinues part of an array
// ex
// array = [1,2,3]
// sub arrays = 1,2,3,12,23,123
//  without kadanes algorithm if find then it will take O(n^2)
//! example to print sub array

#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     int arr[] = {1, 2, 3, 4};

//     for (int st = 0; st < 4; st++)
//     {
//         for (int end = st; end < 4; end++)
//         {
//             for (int i = st; i <= end; i++)
//             {
//                 cout << arr[i];
//             }
//             cout << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
//! example to find max sum from sub array
int main()
{
    int arr[] = {1, -2, 3, 4};
    int currSum = 0;
    int maxSum = INT_MIN;
    for (int st = 0; st < 4; st++)
    {
        currSum = 0;
        for (int end = st; end < 4; end++)
        {
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }
    cout << maxSum;
    return 0;
}