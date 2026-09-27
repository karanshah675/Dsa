// stack works in lifo method
#include <bits/stdc++.h>
using namespace std;

int main()
{
// Stack follows LIFO
    // LIFO = Last In First Out

    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    // Top element
    cout << s.top() << endl;  // 30

    // Remove top element
    s.pop();

    cout << s.top() << endl;  // 20

    // Number of elements
    cout << s.size() << endl;

    // Check empty
    cout << s.empty() << endl;
    return 0;
}