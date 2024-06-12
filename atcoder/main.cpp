#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int numZeros = 0;
    for (char x : s) {
        if (x == '0')
            numZeros++;
    }
    if (numZeros % 2 == 1) {
        if (n == 1) {
            cout << "BOB\n";
            return;
        }
        cout << "ALICE\n";
    } else {
        cout << "BOB\n";
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
