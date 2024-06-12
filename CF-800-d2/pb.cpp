#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = n;
    int j = 1;
    int i = 0;
    while (j < n and i < n) {
        if (s[j] != s[j - 1]) {
            ans = ans + j;
        }
        j++;
    }
    cout << ans << endl;
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
