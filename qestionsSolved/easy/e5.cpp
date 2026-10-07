#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countOdds(int low, int high) {
       int count=0;
        for(int i=low;i<=high;i++){
            if(i%2!=0){
                count++;
            }
        }
        return count;
    }
};
// time:O(n)
// space:O(1)

class Solution {
    public:
    int countOdds(int low, int high) {
        return (high+1)/2-low/2;
    }
};
// time:O(1)
// space:O(1)

int main() {
    
    return 0;
}