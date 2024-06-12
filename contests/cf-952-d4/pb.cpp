#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int MOD = pow(10, 9) + 7;

void solve() {
    int n;
    cin >> n;
    int sum = 0;
    int x = 0;
    for (int i = 2; i <= n; i++) {
        int numMultiples = n / i;
        if ((i * (numMultiples) * (numMultiples + 1)) / 2 >= sum) {
            x = i;
            sum = (i * (numMultiples) * (numMultiples + 1)) / 2;
        }
    }
    cout << x << endl;
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
