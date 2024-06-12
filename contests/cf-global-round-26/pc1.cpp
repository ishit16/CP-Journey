#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve() {
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    vector<int> prefix(n, 0);
    prefix[0] = a[0];
    int c = 0;
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + a[i];
    }
    for (int i = 0; i < n; i++) {
        c = max(abs(prefix[i]), abs(c + a[i]));
    }
    cout << c << endl;
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
