#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int MOD = 1e9 + 7;

int Sum(int firstNumber, int lastNumber, int multiplesOfCurrent) {
    int factor1 = firstNumber + lastNumber;
    int factor2 = lastNumber - firstNumber + 1;
    int INV = 500000004; // Modular inverse of 2 mod 10^9 + 7
    int ans = ((((((factor1 % MOD) * (factor2 % MOD)) % MOD) * multiplesOfCurrent) % MOD) * INV) % MOD;
    return ans;
}

void solve() {
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int multiplesOfCurrent = n / i;
        int lastNumber = n / multiplesOfCurrent;
        ans = (ans + Sum(i, lastNumber, multiplesOfCurrent)) % MOD;
        i = lastNumber;
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
