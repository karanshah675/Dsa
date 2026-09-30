#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1 = {1, 23, 44};
    v1.push_back(11);
    v1.emplace_back(12);

    vector<int> v2(v1);

    //*iterator in easy way
    for (auto i : v2)
    {
        cout << i << "\n";
    }

    //*iterator
    vector<int>::iterator it = v1.begin();
    cout << "printing with iterator" << *(it) << "\n";
    it++;
    cout << "printing with iterator" << *(it);
    //!.end() will give last element +1 address
    vector<int>::iterator it2 = v1.end();
    it2--;
    cout << "printing with iterator" << *(it);

    //*accessing vector with index value
    cout << v1[0] << " " << v1.at(0);
    cout << v1.back();

    //*iterator and loop
    for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
    {
        cout << *(it) << " ";
    }
    for(auto it = v1.begin();it!=v1.end();it++){
        cout << *(it) << " ";
    }
      for (auto i : v2)
    {
        cout << i << "\n";
    }
    
    //*earse in vector
    v1.erase(v1.begin()+1);
    v1.erase(v1.begin()+1,v1.begin()+5);//(start,end)

    //*insert function
    vector<int>v(5,100); //creates five elements with value 100
    v.insert(v.begin()+1,300);//(location,value)
    v.insert(v.begin()+1,3,300);//(location,amount,value)
    cout<<v[0];

    //*size
    cout<<v.size();

     v.pop_back();//remove last value

     v.clear();//clear entire vector

     cout<<v.empty();//checks vector is empty or not

    return 0;
}