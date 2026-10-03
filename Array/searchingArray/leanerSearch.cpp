#include <bits/stdc++.h>
using namespace std;
int linearSearch(int arr[],int n,int ele){
    for(int i=0;i<n;i++){
        if(arr[i]==ele){
            return i;
        }
    }
    return 0;
}
int main() {
    int arr[] = {1,2,3,4,5,6,6,7};
    int ele = 10;
    int index = linearSearch(arr,sizeof(arr)/sizeof(arr[0]),ele);
    (index)?cout<<"element found at "<<index:cout<<"element not in array";
    return 0;
}