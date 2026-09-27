#include <bits/stdc++.h>
using namespace std;

int main() {
     // By default = Max Heap
    // Largest element stays at top

    priority_queue<int> pq;

    pq.push(10);
    pq.push(30);
    pq.push(20);

    cout << pq.top() << endl;  // 30

    pq.pop();

    cout << pq.top() << endl;  // 20


    // -------------------------------------------------
    // MIN HEAP
    // -------------------------------------------------
    // Smallest element stays at top

    priority_queue<int, vector<int>, greater<int>> minPQ;

    minPQ.push(10);
    minPQ.push(30);
    minPQ.push(20);

    cout << minPQ.top() << endl;  // 10

    return 0;
}