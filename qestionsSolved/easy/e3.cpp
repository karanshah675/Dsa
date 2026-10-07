//https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numberOfSteps(int num)
    {
        int n = num;
        int count = 0;
        while (n != 0)
        {
            if (n % 2 == 0)
            {
                n = n / 2;
            }
            else
            {
                n--;
            }
            count++;
        }
        return count;
    }
};
int main()
{

    return 0;
}
// Complexity
// Time: O(log n)
// Space: O(1)