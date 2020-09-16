/*
A = [5,2,8,9,4]
B = [3,2,9,5]

We construct a set of the elements that appear in A, and after this, we iterate through the elements of B and check for each elements if it also belongs to A. 
This is efficient because the elements of A are in a set. 
Using the set structure, the time complexity of the algorithm is O(nlogn).

this algorithm only work if a.size() >= b.size()
*/

#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i<b; i++)

using namespace std;

int main() {

    set<int> a = {5,2,8,9,4};
    set<int> b = {3,2,9,5};
    vector<int> c;

    for(auto x : a) {
        int found = -1;
        for(auto y : b) {
            if(x == y) {
                found = 1;
                break;
            }
        }
        if(found == 1) {
            c.push_back(x);
        }
    }

    cout << "a = { ";
    for(auto x : a) {
        cout << x << " ";
    }
    cout << "}\n";

    cout << "b = { ";
    for(auto x : b) {
        cout << x << " ";
    }
    cout << "}\n";

    cout << "c = { ";
    REP(i,0,(int)c.size()) {
        cout << c[i] << ' ';
    }
    cout << "}";

}