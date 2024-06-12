#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int MOD = pow(10, 9) + 7;

int expo(int a, int b) {
    if (a == 0 and b == 0) {
        return 1;
    }
    if (a == 0 and b != 0) {
        return 0;
    }
    if (b == 0 and a != 0) {
        return 1;
    } else if (b % 2 == 0) {
        return ((expo(a, b / 2) % MOD) * (expo(a, b / 2) % MOD)) % MOD;
    } else if (b % 2 == 1) {
        return ((((a % MOD) * (expo(a, (b - 1) / 2) % MOD)) % MOD) * (expo(a, (b - 1) / 2) % MOD)) % MOD;
    }
}

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        int ans = expo(a, b);
        cout << ans << endl;
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
