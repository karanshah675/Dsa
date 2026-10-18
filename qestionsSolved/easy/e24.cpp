class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> chars = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        set<string> st;
        string str;
        int count=0;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].size();j++){
                int ch = words[i][j];
                str+=chars[ch-97];
            }
            st.insert(str);
            str="";
        }
        return st.size();
        
    }
};
// Time Complexity: (O(N*L))
// Space Complexity: (O(N * L))
// Where \(N\) = number of words and \(L\) = maximum length of a word.
