class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int val=0;
        if(ruleKey=="type"){
            val=0;
        }else if(ruleKey == "color" ){
            val=1;
        }else{
            val=2;
        }
        int count=0;
        for(int i=0;i<items.size();i++){
            if(items[i][val]==ruleValue){
                count++;
            }
        }
        return count;
    }

}
//my approach: find rulekey it could be type,color,name so 0,1,2 index in two dimension,then just outer loop work for finding ruleValue then count if i got my value or not
// time:O(n)
// space:O(1)