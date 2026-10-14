// Reverse a number, sum of digits
#include <bits/stdc++.h>
using namespace std;

int reverseNumber(int n)
{
    static int rev = 0;
    if (n <= 0)
    {
        return rev;
    }
    rev = (rev * 10) + n % 10;
    return reverseNumber(n / 10);
}
int sumOfDigits(int n)
{
    if (n <= 0)
    {
        return n;
    }
    return n % 10 + sumOfDigits(n / 10);
}
int main()
{
    cout << reverseNumber(123);
    cout << endl;
    cout << sumOfDigits(123);
    return 0;
}