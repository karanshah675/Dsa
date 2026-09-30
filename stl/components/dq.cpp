#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq = {22,2,2,2,2};
    dq.push_back(100);
    dq.push_front(200);
    dq.pop_back();
    dq.pop_front();
    for (auto d : dq)
    {
        cout << d << ' ';
    }
    // rest function same as vector
    return 0;
}