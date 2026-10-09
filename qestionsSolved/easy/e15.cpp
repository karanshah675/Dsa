// https://leetcode.com/problems/divide-array-into-equal-pairs/?envType=problem-list-v2&envId=array
class Solution
{
public:
    bool divideArray(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        for (auto i : mp)
        {
            if (i.second % 2 != 0)
            {
                return false;
            }
        }

        return true;
    }
};
// time : O(n)
// space : O(n)
//500 because of constrain is n<=500
class Solution {
public:
    bool divideArray(vector<int>& nums) {
        // Size 501 covers all values from 1 to 500
        int freq[501] = {0};

        for (int x : nums) {
            freq[x]++;
        }

        for (int i = 1; i <= 500; ++i) {
            if (freq[i] % 2 != 0) {
                return false;
            }
        }

        return true;
    }
};
// time : O(n)
// space : O(1)
