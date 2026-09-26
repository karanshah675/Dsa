// https://leetcode.com/problems/number-of-good-pairs/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        int i = 0;
        int j = 1;
        int n = nums.size();
        int count = 0;

        while (i < n)
        {
            while (j < n)
            {
                if (nums[i] == nums[j])
                {
                    count++;
                }
                j++;
            }
            i++;
            j = i + 1;
        }
        return count;
    }
};
// Complexity

// Time:  O(n²)
// Space: O(1)

// optimal solution

// int numIdenticalPairs(vector<int>& nums) {
//     unordered_map<int, int> freq;
//     int count = 0;

//     for (int num : nums) {
//         count += freq[num];
//         freq[num]++;
//     }

//     return count;
// }