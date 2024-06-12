#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve() {
    int q;
    cin >> q;
    int n, k;
    cin >> n >> k;
    vector<bool> children(n, false);
    bool prevSeen = false;
    int i = 0;
    int numRemoved = 0;
    int lastRemoved;
    while (numRemoved < k) {
        if (prevSeen == false) {
            if (children[i % n] == false) {
                i++;
                prevSeen = true;
            } else if (children[i % n] == true) {
                i++;
            }
        } else {
            if (children[i % n] == false) {
                children[i % n] = true;
                prevSeen = false;
                lastRemoved = i % n;
                i++;
                numRemoved++;
            } else {
                i++;
            }
        }
    }
    cout << lastRemoved + 1 << endl;
    return;
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
