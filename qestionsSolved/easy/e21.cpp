// https://leetcode.com/problems/is-subsequence/?envType=problem-list-v2&envId=string
class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int j=0;
        int i=0;
        while(j<s.size() && i<t.size()){
            if(s[j]==t[i]){
                i++;
                j++;
                continue;
            }
            i++;
        }
        if(j==s.size()){
            return true;
        }
        return false;
    }
};
// time : O(n) because it will run O(min(m,n)) m = for s and n = for t and in worst case it will run n time
// space : O(1)