#include <bits/stdc++.h>
using namespace std;

int main() {
     // Queue follows FIFO
    // FIFO = First In First Out

    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    // First element
    cout << q.front() << endl;  // 10

    // Last element
    cout << q.back() << endl;   // 30

    // Remove first element
    q.pop();

    cout << q.front() << endl;  // 20
    return 0;
}