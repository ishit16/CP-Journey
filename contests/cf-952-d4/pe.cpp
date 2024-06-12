#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int MOD = pow(10, 9) + 7;

void solve() {
    int x, y, z, k;
    cin >> x >> y >> z >> k;
    int ans = 0;
    for (int i = 1; i <= x; i++) {
        int temp_k = k;
        if (temp_k % i == 0) {
            temp_k = temp_k / i;
            for (int j = 1; j * j <= temp_k; j++) {
                if (temp_k % j == 0) {
                    if (j <= y and temp_k / j <= z) {
                        ans = max(ans, (x - i + 1) * (y - j + 1) * (z - temp_k / j + 1));
                    }
                    if (j <= z and temp_k / j <= y) {
                        ans = max(ans, (x - i + 1) * (y - temp_k / j + 1) * (z - j + 1));
                    }
                }
            }
        }
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
