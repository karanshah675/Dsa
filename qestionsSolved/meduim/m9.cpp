// https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/
class Solution {
public:
    int minAddToMakeValid(string s) {
        int open=0;
        int close=0;
        for(auto i : s){
              if(i=='('){//count open bracket
                open++;
              }else if(i==')' && open>0){//close founded after open so its valid
                open--;
              }else{//close founded without open we need open extra
                close++;
              }
        }
        return open+close;
    }
};
//time:O(n)
//space:O(1)