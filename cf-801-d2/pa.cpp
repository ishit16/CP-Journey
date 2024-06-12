#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve() {
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    if (n % 2 == 0) {
        int mikeMin = INT_MAX;
        int joeMin = INT_MAX;
        int mikeIndex = 0;
        int joeIndex = 0;
        for (int i = 0; i < n; i += 2) {
            if (a[i] < mikeMin) {
                mikeMin = a[i];
                mikeIndex = i;
            }
        }
        for (int i = 1; i < n; i += 2) {
            if (a[i] < joeMin) {
                joeMin = a[i];
                joeIndex = i;
            }
        }
        if (mikeMin < joeMin) {
            cout << "Joe\n";
            return;
        }
        if (joeMin < mikeMin) {
            cout << "Mike\n";
            return;
        }
        if (mikeMin == joeMin) {
            if (mikeIndex < joeIndex) {
                cout << "Joe\n";
                return;
            } else {
                cout << "Mike\n";
                return;
            }
        }
    } else {
        cout << "Mike\n";
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
