class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxnum = INT_MIN;
        int count=0;
        for(auto i : nums){
            maxnum = max(i,maxnum);
        }
        for(auto i : nums){
            count += maxnum-i;
        }
        return count;
    }
};
// time : O(n)
// space : O(1)