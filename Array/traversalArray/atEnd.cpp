//insert at last not shifting 
#include <bits/stdc++.h>
using namespace std;

 
int main()
{
    int arr[5] = {1, 2, 3, 4};
    arr[4]=5;
    for (int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}