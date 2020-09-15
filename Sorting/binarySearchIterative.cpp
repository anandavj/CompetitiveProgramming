#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i<b; i++)

using namespace std;

int main() {
    vector<int> array = {62, 12, 21, 70, 91, 15, 5, 86, 81, 24, 27, 54};
    int l = 0;
    int r = (int)array.size()-1;
    int number;
    int found;

    sort(array.begin(),array.end());
    cout << "array = { ";
    REP(i,0,(int)array.size()) {
        cout << array[i] << ' ';
    }
    cout << "}\n";
    cin >> number;

    while(l<=r) {
        int m = (l+r)/2;
        if(array[m] == number) {
            found = m; break;
        }
        if(array[m] > number) {
            r = m-1;
        } else {
            l = m+1;
        }
        found = -1;
    }

    cout << found;
}