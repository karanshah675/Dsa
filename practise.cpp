#include <bits/stdc++.h>
using namespace std;

int main()
{
    string num1 = "11";
    string num2 = "123";
    int n1 = 0;
    int n2 = 0;
    for (auto i : num1)
    {
        n1 = (n1 * 10) + (i - '0');
    }
    for (auto i : num2)
    {
        n2 = (n2 * 10) + (i - '0');
    }
    cout << n1 << ":" << n2 << endl;
    int sum = n1 + n2;
    cout << sum << endl;
    string str = "";
    while (sum != 0)
    {
        str += to_string(sum / 10);
        sum = sum%10;
    }
    cout << str;
    return 0;
}