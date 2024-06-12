#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve() {
    int n;
    cin >> n;
    string num;
    cin >> num;
    char firstDigit = num[0];

    if (firstDigit != '9') {
        string k(n, '9'); // initialize k with n '9's
        string ans;
        for (int i = 0; i < n; i++) {
            int diff = (k[i] - '0') - (num[i] - '0');
            ans.push_back(diff + '0'); // convert back to char
        }
        cout << ans << endl;
    } else {
        string ans(n, '0'); // initialize result with n '0's
        int carry = 0;

        for (int i = n - 1; i >= 0; i--) {
            int digit = num[i] - '0';
            int diff = 1 - digit - carry;

            if (diff < 0) {
                diff += 10;
                carry = 1;
            } else {
                carry = 0;
            }

            ans[i] = diff + '0';
        }

        cout << ans << endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
