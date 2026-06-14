#include <bits/stdc++.h>
using namespace std;

int main(){

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout << v.size() << endl;   

    vector<int> v1 ;
    vector<int> v2(5);
    vector<int> v3(5,100);
    vector<int> v4(v3);
    for (int x: v3){
        cout << x << " " << endl;
    }

    vector<pair<int,int>> vec;
    vec.push_back({1,3});
    vec.emplace_back(1,2); 

    vector <int> v ={10,20,30,40,50};

    for (int i = 0; v.size(); i++){
        cout << v[i] << " " ;
    }
}
