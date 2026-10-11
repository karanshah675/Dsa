// https://leetcode.com/problems/sum-of-squares-of-special-elements/?envType=daily-question&envId=2026-10-11
class Solution {
public:
    int sqr(int i){
        return i*i;
    }
    int sumOfSquares(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=1;i<=nums.size();i++){
            if(n%i==0){
                sum+=sqr(nums[i-1]);
            }
        }
        return sum;
    }
};
// time : O(n)
// space : O(1)