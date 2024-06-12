#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve() {
    int a, b;
    cin >> a >> b;
    string s;
    while (a != 0 and b != 0) {
        s.push_back('0');
        s.push_back('1');
        a--;
        b--;
    }
    for (int i = 0; i < a; i++) {
        s.push_back('0');
    }
    for (int i = 0; i < b; i++) {
        s.push_back('1');
    }
    cout << s << endl;
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
