#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int MOD = 1e9 + 7;

void solve() {
    int n;
    cin >> n;
    int actual = (n * (n + 1)) / 2;
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        int x;
        cin >> x;
        sum += x;
    }
    cout << actual - sum << endl;
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
