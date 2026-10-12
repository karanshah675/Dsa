// https://leetcode.com/problems/set-mismatch/description/

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        map<int, int> mp;

        for (int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }

        int repeating = -1;
        int missing = -1;

        for (int i = 1; i <= n; i++) {
            if (mp[i] == 2) {
                repeating = i;
            }
            else if (mp[i] == 0) {
                missing = i;
            }
        }

        return {repeating, missing};
    }
};
