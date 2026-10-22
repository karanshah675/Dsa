// https://leetcode.com/problems/reverse-bits/
class Solution {
public:
    int findPower(int p, int j) {
        long n = 1;
        if (p == 0) {
            return 0;
        }

        while (j > 0) {
            n *= 2;
            j--;
        }
        return n;
    }
    int reverseBits(int n) {
        
        string str;
        while (n != 0) {
            str += to_string(n % 2);
            n /= 2;
        }
        while (str.size() < 32) {
            str += "0";
        }
        int sum = 0;
        int count = 0;
        reverse(str.begin(), str.end());
        for (int i = 0; i < str.size(); i++) {

            // sum += findPower(stoi(str[i]));
            sum += findPower(str[i] - '0', count);
            count++;
        }
        return sum;
    }
};
// Time complexity: \(O(n^2)\)



// Space complexity: \(O(n)\)