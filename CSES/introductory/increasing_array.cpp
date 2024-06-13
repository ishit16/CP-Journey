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
    int n;
    cin >> n;
    int ans = 0;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            ans = ans + (a[i - 1] - a[i]);
            a[i] = a[i - 1];
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
