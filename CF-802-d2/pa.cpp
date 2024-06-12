#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve() {
    int n, m;
    cin >> n >> m;
    int ans = 0;
    ans = ans + (m * (m + 1)) / 2;
    for (int i = 2 * m; i <= n * m; i += m) {
        ans = ans + i;
    }
    cout << ans << "\n";
    return;
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
