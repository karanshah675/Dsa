// Print 1 to N, print N to 1
#include <bits/stdc++.h>
using namespace std;

void print1ToN(int n)
{
    if (n == 0)
    {
        return;
    }
    print1ToN(n - 1);
    cout << n << " ";
}
void printNTo1(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    printNTo1(n - 1);
}
int main()
{
    print1ToN(5);
    cout << endl;
    printNTo1(5);
    return 0;
}