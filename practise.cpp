#include <bits/stdc++.h>
using namespace std;

int findPower(int p, int j)
{
    long n = 1;
    if (p == 0)
    {
        return 0;
    }

    while (j > 0)
    {
        n *= 2;
        j--;
    }
    return n;
}
int main()
{
    int n = 43261596;
    string str;
    while (n != 0)
    {
        str += to_string(n % 2);
        n /= 2;
    }
    while (str.size() < 32)
    {
        str += "0";
    }
    int sum = 0;
    int count = 0;
    reverse(str.begin(), str.end());
    for (int i = 0; i < str.size(); i++)
    {

        // sum += findPower(stoi(str[i]));
        sum += findPower(str[i] - '0', count);
        count++;
    }
    cout << sum;
    return 0;
}