#include <bits/stdc++.h>
using namespace std;

int main() {
     int arr[4] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int elementRemove = 3;
    int index=0;
    for(int i=0;i<n;i++){
        if(arr[i]==elementRemove){
            index=i;
        }
    }
    for (int i = index; i < n - 1; i++)
    {
        arr[i] = arr[i+1];
    }
    --n;;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}