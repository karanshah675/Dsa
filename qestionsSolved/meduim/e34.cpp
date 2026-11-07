// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int bestBuy=INT_MAX;
        for(auto i : prices){
            if(i>bestBuy){
                maxProfit=max(maxProfit,i-bestBuy);
            }else{
                bestBuy=i;
            }   
             
        }
        return maxProfit;
    }
};
// time:O(n)
//space:O(1)