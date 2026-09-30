#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int subtractProductAndSum(int n)
    {
        int sum = 0;
        int prod = 1;
        while (n != 0)
        {
            sum += n % 10;
            prod *= n % 10;
            n /= 10;
        }
        return prod - sum;
    }
};
// Time: O(log n), 
// Space: O(1)
int main()
{

    return 0;
}