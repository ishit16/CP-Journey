#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int MOD = pow(10, 9) + 7;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> diam;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char x;
            cin >> x;
            if (x == '#') {
                diam.push_back({i + 1, j + 1});
            }
        }
    }
    if (diam.size() == 0) {
        cout << 1 << " " << 1 << "\n";
        return;
    }
    pair<int, int> top;
    pair<int, int> bottom;
    pair<int, int> left;
    pair<int, int> right;
    top = diam[0];
    bottom = diam[diam.size() - 1];
    int r = INT_MAX;
    for (int i = 0; i < diam.size(); i++) {
        if (diam[i].second < r) {
            r = diam[i].second;
            left = diam[i];
        }
    }
    int l = INT_MIN;
    for (int i = 0; i < diam.size(); i++) {
        if (diam[i].second > l) {
            l = diam[i].second;
            right = diam[i];
        }
    }
    int y = (top.first + bottom.first) / 2;
    int x = (left.second + right.second) / 2;
    cout << y << " " << x << "\n";
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
