// https://leetcode.com/problems/remove-outermost-parentheses/description/
class Solution {
public:
    string removeOuterParentheses(string s) {
        int count =0;
        int index=0;
        string str="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                count++;
            }else if(s[i]==')'){
                count--;
            }
            if(count==0){
                str+=s.substr(index+1,i-index-1);
                index=i+1;
            }
        }
        return str;
        
    }
};
//time : O(n)
//space : O(n)
