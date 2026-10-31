#include <bits/stdc++.h>
using namespace std;
int main()
{
    // # in c++ we can create string using char array or string class
    char str[] = "hi i am karan";
    char name[] = {'k', 'a', 'r', 'a', 'n', '\0'}; //! if you don't put '\0' at end it will read next string also till not get \0 thi is undefined behavior
    cout << name;
    char str1[10];
    cin >> str1; //! this will only take word till space
    char str2[10];
    cin.getline(str2, 10); //! this will take string till we don't press enter
    char str3[10];
    cin.getline(str3, 10, '$'); //! this will take string till $ not added
    cout << strlen(str); //!strlen used to count length of string
    return 0;
}