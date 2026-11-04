class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());//place strings at correcgt postions
        string ans="";
        for(int i=0;i<s.size();i++){
         
            string word = "";
            while(i<s.size() && s[i]!=' '){ //string has ' ' means word found
                word+=s[i];
                i++;
            }
            reverse(word.begin(),word.end());//reverse founded word
            if(word.length()>0){//if word found add in answer
                ans+=' ';
                ans+=word;

            } 
        }
        return ans.substr(1);//because we want to submit answer without leading space
    }
};
//time : O(n) becuase only one itretor i
// space : O(n);