class Solution {
public:
    int findSum(string str) {
        int sum = 0;
        for (char ch : str) {
            sum += ch - '0';
        }

        return sum;
    }
    string digitSum(string s, int k) {
        string temp = "";
        int i = 0;

        while (s.size() > k) {
            string temp = "";

            for (int i = 0; i < s.size(); i += k) {
                temp += to_string(findSum(s.substr(i, k)));
            }

            s = temp;
        }
        return s;
    }
};
// time:O(n^3)
// space:O(1)