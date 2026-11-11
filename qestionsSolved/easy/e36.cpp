class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string str="";
        map<int,char> st;
        int count=0;
        for(int i=0;i<indices.size();i++){
            st[indices[i]]=s[i];
        }
        for(auto i : st){
            str+=i.second;
        }
        return str;
        
    }
};
