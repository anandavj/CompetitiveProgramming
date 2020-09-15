//Page 39

#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i<b; i++)

using namespace std;

int main() {
    vector<int> v = {4,2,1,3,1,21,76};
    sort(v.begin(), v.end());
    cout << "v = { ";
    REP(i,0,(int)v.size()) {
        cout << v[i] << ' ';
    }
    cout << "}";
}