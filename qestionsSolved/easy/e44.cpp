class Solution {
public:
    bool checkString(string s) {
        bool findA = false;
        bool findB=false;
        if(s[0]=='a'){
            findA=true;
        }else{
            findB=true;
        }
        for(int i=1;i<s.size();i++){
            if(s[i]=='a' && findB){
                return false;
            }else if(s[i]=='b' && findA && findB==false ){
                findB=true;
                findA=false;
            }else if(s[i]=='b' && findA){
                return false;
            }

        }
        return true;
    }
};
time:O(n)
space:O(1)