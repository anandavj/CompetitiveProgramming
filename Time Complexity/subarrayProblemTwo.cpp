// Page 21 with O(n^2)

#include <bits/stdc++.h>

#define REP(i,a,b) for(int i = a; i<=b; i++)

using namespace std;

int main() {
    int array[8] = {-1, 2, 4, -3, 5, 2, -5, 2};
    int best = 0;

    REP(i,0,7) {
        int sum = 0;
        REP(j,i,7) {
            sum += array[j];
            best = max(best, sum);
        }
    }

    cout << best << "\n";
}