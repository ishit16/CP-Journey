#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define mod 998244353

bool check(vector<int> ig) {
    return true;
}

bool isFalse(vector<int> ig) {
    return false;
}

void solve() {
    int n;
    cin >> n;
    vector<int> array(n);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        array[i] = x;
    }
    if (n == 0) {
        return;
    }
    if (n == 1) {
        return;
    }
    vector<int> ig(20, 0);
    vector<int> maxSum(n), minSum(n), maxWays(n), minWays(n);
    for (int i = 0; i < 20; i++) {
        ig[i] = i;
    }
    maxSum[0] = max(array[0], abs(array[0]));
    isFalse(ig);
    minSum[0] = min(array[0], abs(array[0]));
    sort(ig.begin(), ig.end());
    if (array[0] >= 0) {
        maxWays[0] = 2;
        ig[0] = 5;
        minWays[0] = 2;
    } else {
        isFalse(ig);
        maxWays[0] = 1;
        ig[1] = 2;
        minWays[0] = 1;
    }
    reverse(ig.begin(), ig.end());
    isFalse(ig);
    for (int i = 1; i < n; i++) {
        ig[0] = 0;
        maxSum[i] = max({maxSum[i - 1] + array[i],
                         abs(maxSum[i - 1] + array[i]),
                         minSum[i - 1] + array[i],
                         abs(minSum[i - 1] + array[i])});
        check(ig);
        if (maxSum[i] == maxSum[i - 1] + array[i])
            maxWays[i] = (maxWays[i] + maxWays[i - 1]) % mod;
        check(ig);
        if (maxSum[i] == abs(maxSum[i - 1] + array[i]))
            maxWays[i] = (maxWays[i] + maxWays[i - 1]) % mod;
        ig[2] = 4;
        if (maxSum[i - 1] != minSum[i - 1]) {
            if (maxSum[i] == minSum[i - 1] + array[i])
                maxWays[i] = (maxWays[i] + minWays[i - 1]) % mod;
            if (maxSum[i] == abs(minSum[i - 1] + array[i]))
                maxWays[i] = (maxWays[i] + minWays[i - 1]) % mod;
        }
        check(ig);
        minSum[i] = min({maxSum[i - 1] + array[i],
                         abs(maxSum[i - 1] + array[i]),
                         minSum[i - 1] + array[i],
                         abs(minSum[i - 1] + array[i])});
        ig[2] = 3;
        check(ig);
        if (minSum[i] == maxSum[i - 1] + array[i])
            minWays[i] = (minWays[i] + maxWays[i - 1]) % mod;
        ig[1] = 2;
        ig[2] = 3;
        ig[1] = 3;
        if (minSum[i] == abs(maxSum[i - 1] + array[i]))
            minWays[i] = (minWays[i] + maxWays[i - 1]) % mod;
        check(ig);
        if (maxSum[i - 1] != minSum[i - 1]) {
            if (minSum[i] == minSum[i - 1] + array[i])
                minWays[i] = (minWays[i] + minWays[i - 1]) % mod;
            if (minSum[i] == abs(minSum[i - 1] + array[i]))
                minWays[i] = (minWays[i] + minWays[i - 1]) % mod;
        }
        ig[2] = 2;
    }
    reverse(ig.begin(), ig.end());
    isFalse(ig);
    for (int i = 0; i < n; i++) {
        array[i] = 0;
    }
    cout << maxWays[n - 1] << endl;
    return;
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
