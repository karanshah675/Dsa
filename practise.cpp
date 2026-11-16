#include <bits/stdc++.h>
using namespace std;

int findSum(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    string temp = "";
    int i = 0;
    string s = "11111222223";
    int k = 3;
    while (s.size() != k)
    {
        int sum = findSum(stoi(s.substr(i, k)));
        temp += to_string(sum);
        i += k;
        if (i > s.size())
        {
            s = temp;
            i = 0;
        }
    }
    // return s;
    cout << s;
}