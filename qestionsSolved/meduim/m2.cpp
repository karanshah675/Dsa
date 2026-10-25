class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
     
    int currSum = 0;
 
    vector<int> p(nums);
    p[0] = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        p[i] = p[i - 1] + nums[i];
    }
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        if (p[i] == k)
        {
            currSum++;
        }
        int val = p[i] - k;
        if (mp.find(val) != mp.end())
        {
            currSum += mp[val];
        }
        mp[p[i]]++;
    }
    return currSum;
    }
};