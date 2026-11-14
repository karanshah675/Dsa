class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int minSum=INT_MAX;
        int count=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            count=1;
            int j=i;
            sum=0;
            while(count<=r && j<nums.size()){
                sum+=nums[j];
                if(count>=l && sum>0){
                    minSum=min(minSum,sum);
                }
                count++;
                j++;
            }   
        }
        return minSum==INT_MAX?-1:minSum;
    }
};
// time : O(n*m)
// space:O(1)