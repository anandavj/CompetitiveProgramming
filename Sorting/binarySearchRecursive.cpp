#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i<b; i++)

using namespace std;

int binary(vector<int> vec, int l, int r, int num) {
    if(r>=1) {
        int m = (l+r)/2;
        if(vec[m] == num) {
            return m;
        }
        if(vec[m]>num) {
            return binary(vec, l, m-1, num);
        } return binary (vec, m+1, r, num);
    } return -1;
}

int main() {
    vector<int> array = {62, 12, 21, 70, 91, 15, 5, 86, 81, 24, 27, 54};
    sort(array.begin(),array.end());
    cout << "array = { ";
    REP(i,0,(int)array.size()) {
        cout << array[i] << ' ';
    }
    cout << "}\n";
    int find;
    cin >> find;
    cout << "\nFOUND AT: " << binary(array, 0, (int)array.size()-1, find);
}