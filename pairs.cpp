#include <bits/stdc++.h>
using namespace std;

void explainPair();
void explainVector();


int main(){
    explainVector();
    //explainPair();
    return 0;
}

void explainPair(){
    pair<int,int> p ={1,3};
    cout << p.first << " " << p.second << endl;
    pair<int,pair<int,int>> p1 ={1,{1,3}};
    cout << p1.first << " " << p1.second.second << endl;
    pair<int , int> arr[] = {{1,2},{3,4},{5,6}};
    cout << arr[1].second << endl ;
    pair<int , int> p2 = make_pair(10,20);
    cout << p2.first << " " << p2.second << endl;
    pair<int , int> p3 = {15,30};
    pair<int , int> p4 = {30,15};
    swap(p3,p4);
    cout << p3.first << " " << p3.second << endl;
    cout << (p3 < p4);
}

void explainVector(){
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>>vec;

    vec.push_back({1,3});
    vec.emplace_back(1,2);

    vector<int> v1(5,100);

    vector<int> v2(5);

    vector<int> v3(5,20);
    vector<int> v4(v3);

    cout << v[0] << " " << v[1] << endl;

    cout << vec[0].first << " "
     << vec[0].second << endl;
    
    cout << v1[2] << endl;

    for(int i =0; i < v1.size(); i++){
        cout << v1[i] << " ";
    }
    cout << endl;

    for(int x : v1) {
    cout << x << " ";
    }
    cout << endl;
    cout << v1[2] << " "<< endl;  
    cout << "v3:";
    for(int x: v3){
        cout << x << " ";
    }
    cout << endl;
    cout << "v4:";
    for(int x: v4){
        cout << x << " ";
    }
    cout << endl;

    vector<int>::iterator it = v.begin();

it++;

cout << *(it) << " " ;

it = it + 2;
cout << *(it) << " " ;

vector<int>::iterator it0 = v.end();
vector<int>::iterator it1 = v.rend();
vector<int>::iterator it2 = v.rbegin();

cout << v[0] << " " << v.at(0);
           

}




