#include <bits/stdc++.h>
using namespace std;

int main() {
     int arr[4] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
  
    --n;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}