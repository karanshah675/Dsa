#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Allows duplicate keys.

    multimap<int, string> mp;

    mp.insert({1, "Karan"});
    mp.insert({1, "Rahul"});
    mp.insert({2, "Amit"});

    // Key 1 can have multiple values.

    // Important:
    // mp[1] DOES NOT work with multimap.

    // Use insert() :

    mp.insert({1, "Karan"});

    return 0;
}