#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve() {
    int n;
    cin >> n;
    vector<int> a;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum = sum + x;
        a.push_back(x);
    }
    if (sum != 0) {
        cout << "NO\n";
        return;
    }
    vector<int> pre(n, 0);
    pre[0] = a[0];
    for (int i = 1; i < n; i++) {
        pre[i] = pre[i - 1] + a[i];
    }
    if (pre[n - 1] != 0) {
        cout << "NO\n";
        return;
    }
    for (int x : pre) {
        if (x < 0) {
            cout << "NO\n";
            return;
        }
    }
    for (int i = 0; i < n; i++) {
        if (pre[i] == 0) {
            for (int j = i; j < n; j++) {
                if (pre[j] != 0) {
                    cout << "NO\n";
                    return;
                }
            }
            break;
        }
    }
    cout << "YES\n";
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
