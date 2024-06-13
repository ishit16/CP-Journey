#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int MOD = 1e9 + 7;

void solve() {
    int n;
    cin >> n;
    cout << n << " ";
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
            cout << n << " ";
        }else{
            n = 3*n + 1;
            cout << n << " ";
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
