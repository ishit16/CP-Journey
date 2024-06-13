#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int MOD = 1e9 + 7;

bool check(int window, string s) {
    int n = s.size();
    for (int i = 0; i < n - 1; i++) {
        int count = 1;
        if (s[i] == s[i + 1]) {
            while (s[i] == s[i + 1] and i <= n - 2) {
                count++;
                i++;
            }
        }
        if (count >= window)
            return true;
    }
    return false;
}

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    int l = 0;
    int r = n;
    int ans = 0;
    if (n == 1) {
        cout << 1 << "\n";
        return;
    }
    while (l <= r) {
        int mid = (l + r) / 2;
        if (check(mid, s)) {
            l = mid + 1;
            ans = max(ans, mid);
        } else {
            r = mid - 1;
        }
    }
    cout << ans << endl;
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
