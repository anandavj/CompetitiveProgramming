#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i<b; i++)
#define RIP(i,a,b) for(int i = a; i>b; i--)

using namespace std;

int main() {
    vector<int> array = {4,1,2,5,2,1,3};

    RIP(i,(int)array.size(),0) {
        REP(j,0,i) {
            if(array[j]>array[j+1]) swap(array[j],array[j+1]);
        }
    }

    cout << "array = { ";
    REP(i,0,(int)array.size()) {
        cout << array[i] << ' ';
    }
    cout << "}";
}