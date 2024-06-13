#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int MOD = pow(10, 9) + 7;

void solve() {
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    int l = 0;
    int r = n - 1;
    int maxNum = n;
    int minNum = 1;
    while (l < r) {
        if (nums[l] == minNum) {
            l++;
            minNum++;
        } else if (nums[l] == maxNum) {
            l++;
            maxNum--;
        } else if (nums[r] == minNum) {
            r--;
            minNum++;
        } else if (nums[r] == maxNum) {
            r--;
            maxNum--;
        } else
            break;
    }
    if (l < r) {
        cout << l + 1 << " " << r + 1 << "\n";
        return;
    } else {
        cout << -1 << "\n";
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
