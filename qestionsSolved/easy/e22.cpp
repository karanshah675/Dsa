// https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/description/
class Solution
{
public:
    int maxDepth(string s)
    {
        int count = 0;
        int max = 0;
        for (auto i : s)
        {
            if (i == '(')
            {
                count++;
                if (max < count)
                {
                    max = count;
                }
            }
            else if (i == ')')
            {
                count--;
            }
        }
        return max;
    }
};
// time : O(n)
// space : O(1)