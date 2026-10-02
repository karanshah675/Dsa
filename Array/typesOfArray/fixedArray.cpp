#include <bits/stdc++.h>
using namespace std;

int main()
{
    // you can not increase the size of array
    int arr[5] = {1, 2, 3, 4, 5};

    // this will generate error in java but in c++ it will store element in random address and not give error
    arr[6] = 22;
    cout << arr[6] << endl;
    cout << &arr[6] << endl;
    cout << &arr[4];

    return 0;
}