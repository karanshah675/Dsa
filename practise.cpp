#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "axxxxyyyyb";
    cout << str.substr(4, 2) << endl;
    str.erase(4, 2);
    cout << str.substr(3, 2) << endl;
    str.erase(3, 2);
    cout << str;

    return 0;
}