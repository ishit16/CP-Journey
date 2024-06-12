#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve() {
    int n;
    cin >> n;
    vector<int> a;
    int numEven = 0;
    int numOdd = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x % 2 == 0) {
            numEven++;
        } else {
            numOdd++;
        }
        a.push_back(x);
    }
    if (numEven != 0 and numOdd != 0) {
        cout << 2 << "\n";
        return;
    }
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
