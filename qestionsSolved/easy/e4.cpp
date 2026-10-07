#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int sumd(int n){
        int sum=0;
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        return sum;
    } 
    int findSize(int n){
        int sum=0;
        int count=0;
        while(n>0){
            sum+=n%10;
            n/=10;
            count++;
        }
        return count;
    }
    int addDigits(int num) {
        if(num==0){
            return num;
        }
        int n = num;
        int sum=0;
        while(n>0){
            n=sumd(n);
            if(findSize(n)==1){
                return n;
            }
        }
        return 0;
    }
};
// Time: O(number of digits), potentially repeated several times
// Space: O(1)
//optimal way
class Solution {
public:
    int addDigits(int num) {
        if (num == 0)
            return 0;

        return 1 + (num - 1) % 9;
    }
};
int main() {
    
    return 0;
}