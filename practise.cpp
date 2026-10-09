#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    int low=0;
    int high=arr.size()-1;
    int mid=0;
    int target = 9;
    while(low!=high){
        mid=(low+high)/2;
        if(arr[mid]==target){
            cout<<"target is founded";
            break;
        }
        if(arr[mid]>target){
            high=mid-1;
        }
        if(arr[mid]<target){
            low=mid+1;
        }
    }
    if(low==high){
        cout<<"target founded at "<<low;
    }

    return 0;
}