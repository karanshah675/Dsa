// https://leetcode.com/problems/max-consecutive-ones/
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0;
        int oneCount = 0;
       
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                oneCount++;
            }
            if(nums[i]==0 || i==nums.size()-1){
                if(oneCount>max){
                    max=oneCount;
                }
                oneCount=0;
            }
            
        }
        return max;
    }
};
//time O(n)
//space O(1)