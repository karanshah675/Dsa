// https://leetcode.com/problems/richest-customer-wealth/
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum=0;
        int max=0;
        for(int i=0;i<accounts.size();i++){
            for(int j=0;j<accounts[i].size();j++){
                sum+=accounts[i][j];
            }
            if(sum>max){
                max=sum;
            }
            sum=0;
        }
        return max;
    }
};
// time:O(n^2)
// space:O(1)
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    return 0;
}