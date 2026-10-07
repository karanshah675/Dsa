class Solution {
public:
    void swapArr(int right, int left, vector<int>& vc){
         while (left <= right)
    {
        int temp = 0;
        temp = vc[right];
        vc[right] = vc[left];
        vc[left]=temp;
        left++;
        right--;
    }
    }
    void rotate(vector<int>& nums, int k) {
        int left=0;
        int right=nums.size()-1;
        
        
        if(nums.size()<2 || k==0){
            return;
        }

        k%=nums.size();
        /*
        cases where k is greater then n
        n=5 and k=5 then rotation will be 0
        n=5 and k=6 then rotation will be 1
        n=5 and k=7 then rotation will be 2
        n=5 and k=8 then rotation will be 3
        n=5 and k=9 then rotation will be 4
        n=5 and k=10 then rotation will be 0
        */
        swapArr(right,left,nums);
        swapArr(k-1,left,nums);
        swapArr(right,k,nums);
    }
};