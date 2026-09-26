// https://leetcode.com/problems/smallest-even-multiple/description/
class Solution
{
public:
    int smallestEvenMultiple(int n)
    {
        if (n % 2 == 0)
        {
            return n;
        }
        else
        {
            return n * 2;
        }
        return 0;
    }
};
// Complexity

// Time:  O(1)
// Space: O(1)