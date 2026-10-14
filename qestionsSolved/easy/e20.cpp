// https://leetcode.com/problems/robot-return-to-origin/
class Solution {
public:
    bool judgeCircle(string moves) {
        int left=0,right=0,up=0,down=0;
        for(auto i : moves){
            if(i=='L'){
                left++;
            }else if(i=='R'){
                right++;
            }else if(i=='D'){
                down++;
            }else{
                up++;
            }
        }
        if(up==down && left==right){
            return true;
        }
        return false;
    }
};