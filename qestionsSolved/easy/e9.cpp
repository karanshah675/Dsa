// https://leetcode.com/problems/duplicate-zeros/?envType=problem-list-v2&envId=array
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        for (int i = 0; i < arr.size()-1; i++) {
            if (arr[i] == 0) {
                for (int j = arr.size() - 1; j > i + 1; j--) {
                    arr[j] = arr[j - 1];
                }
                arr[i + 1] = 0;
                i++;
            }
        }
    }
};
//time O(n^2)
//space O(1)
class Solution {
    public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        int possibleDups = 0;

        // Count zeros that can be duplicated
        for (int i = 0; i + possibleDups < n; i++) {
            if (arr[i] == 0) {
                if (i + possibleDups == n - 1) {
                    arr[n - 1] = 0;
                    n--;
                    break;
                }
                possibleDups++;
            }
        }

        int last = n - 1;

        // Work backwards
        for (int i = n - 1 - possibleDups; i >= 0; i--) {
            if (arr[i] == 0) {
                arr[i + possibleDups] = 0;
                possibleDups--;
                arr[i + possibleDups] = 0;
            } else {
                arr[i + possibleDups] = arr[i];
            }
        }
    }
};
    //time O(n)
    //space O(1)