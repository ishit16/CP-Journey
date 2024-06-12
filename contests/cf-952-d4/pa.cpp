#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int MOD = pow(10, 9) + 7;

void solve() {
    string a, b;
    cin >> a;
    cin >> b;
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    cout << a << " ";
    cout << b << endl;
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
