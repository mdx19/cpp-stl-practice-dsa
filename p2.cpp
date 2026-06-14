#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {10,20,30,40,50};
    auto it = v.begin() + 2;
    v.erase(it);
    auto printit =  v.begin();
    for(; printit != v.end(); ++printit){
        cout << *printit << " " << endl;
    }    
}