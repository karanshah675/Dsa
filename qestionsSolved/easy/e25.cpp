//https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/?envType=problem-list-v2&envId=string
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1;
        string str2;
        for(auto i : word1){
            for(auto j : i){
                str1+=j;
            }
        }
        for(auto i : word2){
            for(auto j : i){
                str2+=j;
            }
        }
        if(str1==str2){
            return true;
        }
        return false;
    }
};

// time : O(n*2)
// space:O(1);