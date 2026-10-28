class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count = 0;

        for (int i = 0; i < s.size(); i++) {
            vector<char> str;

            for (int j = i; j < s.size(); j++) {
                if (find(str.begin(), str.end(), s[j]) == str.end()) {
                    str.push_back(s[j]);
                    count = max(count, (int)str.size());
                } else {
                    break;
                }
            }
        }

        return count;
    }
};