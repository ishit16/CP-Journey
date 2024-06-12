#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int MOD = pow(10, 9) + 7;

void solve() {
    int n;
    cin >> n;
    vector<int> a(1000006, 0);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[x]++;
    }
    for (int gcd = 1000000; gcd > 0; gcd--) {
        int div = 0;
        for (int j = gcd; j <= 1000000; j += gcd) {
            div += a[j];
        }
        if (div >= 2) {
            cout << gcd << "\n";
            break;
        }
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
