#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> li = {1,2,4,5};
    li.push_back(100);   
    li.push_front(200);
    li.pop_back();
    li.pop_front();
    for(auto l : li){
        cout<<l<<' ';
    }  
    //rest function same as vector
    return 0;
}