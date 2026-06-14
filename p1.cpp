#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,int>> v;
    v.emplace_back(4, 8);
    v.push_back({2, 6});
    v.emplace_back(9, 1);

    for(auto& p : v){
        cout << p.first << "+" << p.second << "=" 
             << p.first + p.second << "\n";
    }

    auto it = v.begin();
    ++it;
    cout << it->first << "\n";

    cout << v.back().second << "\n";
    cout << v.size() << "\n";
}



