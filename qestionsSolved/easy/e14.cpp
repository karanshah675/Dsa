// https://leetcode.com/problems/sum-of-unique-elements/?envType=problem-list-v2&envId=array
class Solution
{
public:
    int sumOfUnique(vector<int> &nums)
    {
        map<int, int> mp;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        for (auto i : mp)
        {
            if (i.second == 1)
            {
                sum += i.first;
            }
        }
        return sum;
    }
};