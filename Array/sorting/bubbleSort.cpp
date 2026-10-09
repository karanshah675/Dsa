#include <bits/stdc++.h>
using namespace std;

void swapd(vector<int> &arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void bubbleSort(vector<int> &arr,int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swapd(arr,i,j);
            }
        }
    }
}
int main() {
    vector<int> vc = {12, 3, 4, 5, 2, 1};
    bubbleSort(vc, vc.size());
    for (int i : vc)
    {
        cout << i << " ";
    }
    return 0;
}