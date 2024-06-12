#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int MOD = pow(10, 9) + 7;

vector<int> common(1000005, 0);

void initializeCommon() {
    for (int i = 1; i < 1000005LL; i++) {
        for (int j = i; j < 1000005LL; j += i) {
            common[j]++;
        }
    }
}

void solve() {
    int x;
    cin >> x;
    cout << common[x] << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    initializeCommon();

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
