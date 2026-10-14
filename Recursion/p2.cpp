// Sum of N numbers, factorial
#include <bits/stdc++.h>
using namespace std;

int sumOfN(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    return n + sumOfN(n - 1);
}
int fact(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return n * fact(n - 1);
}
int main()
{
    cout << sumOfN(5);
    cout << fact(5);
    return 0;
}