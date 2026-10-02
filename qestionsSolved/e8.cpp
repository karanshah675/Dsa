// https://leetcode.com/problems/longest-common-prefix/?envType=problem-list-v2&envId=array
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs[0].size()==0){
            return "";
        }
        if(strs.size()==1){
            return strs[0];
        }
        if(strs[0][0]!=strs[1][0]){
            return "";
        }
        string str = "";
        string tempStr = strs[0];
        bool match=false;
        int n = strs[0].length();
        for(int i=0;i<n;i++){
            for(int j=1;j<strs.size();j++){
                if(strs[j].length()<=i){
                    return str;
                }
                if(tempStr[i]==strs[j][i]){
                    match=true;
                }else{
                   return str;

                }
            }
            if(match){
                str+=tempStr[i];
            } 
        }
        return str;
    }
};
// Complexity	Value
// Time	O(n × m)
// Space	O(n)
//!optimal as same time and space complexity as mine
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        if (strs.empty())
            return "";

        string prefix = strs[0];

        for (int i = 1; i < strs.size(); i++) {

            int j = 0;

            while (j < prefix.size() &&
                   j < strs[i].size() &&
                   prefix[j] == strs[i][j]) {
                j++;
            }

            prefix = prefix.substr(0, j);

            if (prefix.empty())
                return "";
        }

        return prefix;
    }
};