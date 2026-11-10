class Solution {
public:
    string truncateSentence(string s, int k) {
        vector<string> vc;
        string str;
        for(int i=0;i<s.size();i++){
            str="";
            while(i<s.size()&&s[i]!=' '){
                str+=s[i];
                i++;
            }
            vc.push_back(str);
        }
        str="";
        str+=vc[0];
        for(int i=1;i<k;i++){
            str+=' '+vc[i];
        }
        return str;
    }
};
// time:O(n)
// space:O(n)