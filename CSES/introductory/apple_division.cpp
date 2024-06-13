#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int MOD = 1e9 + 7;

int piles(vector<int> &a, int index, int pile1, int pile2) {
    if (index == (int)a.size()) {
        return abs(pile1 - pile2);
    }
    int cd1 = piles(a, index + 1, pile1 + a[index], pile2);
    int cd2 = piles(a, index + 1, pile1, pile2 + a[index]);
    return min(cd1, cd2);
}

void solve() {
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    int ans = piles(a, 0, 0, 0);
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
