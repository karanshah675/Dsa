class Solution {
public:
    bool canAliceWin(int n) {
        int count=10;
        while(count!=0){
            if(n-count<0 && count%2==0){
                return false;
            }
            else if(n-count<0 && count%2!=0){
                return true;
            }
            n=n-count;
            count--;
        }
        return true;
         
    }
};
