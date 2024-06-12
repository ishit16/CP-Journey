#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve() {
    int x;
    cin >> x;
    int lastDigit = x % 10;
    string num = to_string(x);
    bool isZeroPresent = false;
    for (int i = 0; i < num.size(); i++) {
        if (num[i] == '0' and i != (int)(num.size() - 1)) {
            isZeroPresent = true;
            break;
        }
    }
    if (lastDigit == 9 or num[0] != '1' or isZeroPresent) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
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
