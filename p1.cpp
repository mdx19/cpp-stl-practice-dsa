#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> v = {1, 2, 4, 4, 4, 6, 8};

    auto it = lower_bound(v.begin(), v.end(), 4);

    cout << *it;
}