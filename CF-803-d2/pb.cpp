#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    int currTall = 0;
    for (int i = 1; i <= n - 2; i++) {
        if (a[i] > a[i - 1] + a[i + 1]) {
            currTall++;
            i++;
        }
    }
    if (k >= 2) {
        cout << currTall << "\n";
        return;
    } else {
        cout << (n - 1) / 2 << "\n";
        return;
    }
    cout << currTall << endl;
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
