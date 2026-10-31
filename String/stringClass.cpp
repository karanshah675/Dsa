#include <bits/stdc++.h>
using namespace std;

int main()
{
    //@ in c++ string is not data type it is considered as class and because of that we can manupilate string
    string str = "hi this is karan";
    str[1] = 'o';
    cout << str;

    string str1;
    getline(cin, str1);//! this will take input till enter is not pressed
    cout << str1;

    return 0;
}