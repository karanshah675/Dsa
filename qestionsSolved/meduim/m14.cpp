class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        vector<int> vc;
        int low=0;
        int high=numbers.size()-1;
        int mid=0;
        while(low<=high){
           mid = numbers[low]+numbers[high];

            if(mid==target){
                return {low+1,high+1};
            }else if(mid>target){
                high--;
            }else{
                low++;
            }
        }
        return {};
    }
};