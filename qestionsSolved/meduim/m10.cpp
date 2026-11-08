class Solution {
public:
    int minMoves(vector<int>& nums) {
        int minNum = INT_MAX;
        int count=0;
        for(auto i : nums){
            minNum = min(i,minNum);
        }
        for(auto i : nums){
            count+=i-minNum;
        }
        return count;
    }
};
// time:O(n)
// space:O(1)
