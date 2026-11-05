#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr1 = {2, 1, 100, 3};
    vector<int> arr2 = {-5, -2, 10, -3, 7};
    int d = 6;
    int count = 0;
    for (int i = 0; i < arr1.size(); i++)
    {
        for (int j = 0; j < arr2.size(); j++)
        {
            
            if (abs(arr1[i] - arr2[j]) <= d && arr1[i] != arr2[j])
            {
                cout << arr1[i] << " - " << arr2[j] << " = " << arr1[i] - arr2[j] << endl;
            }
        }
    }
}