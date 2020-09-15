// Page 21 with O(n)
// STUCK

#include <bits/stdc++.h>

#define REP(i,a,b) for(int i = a; i<=b; i++)

using namespace std;

int main() {
    int array[8] = {-1, 2, 4, -3, 5, 2, -5, 2};
    int best = 0;
    int sum = 0;

    REP(i,0,7) {
        sum = max(array[i], sum+array[i]);
        best = max(sum, best);
    }

    cout << best << "\n";
}