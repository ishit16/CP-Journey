#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve() {
    int n;
    cin >> n;
    map<int, int> hashMap;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
        hashMap[x] += 1;
    }
    if (hashMap.size() == 1) {
        cout << "NO\n";
        return;
    }
    if (hashMap.size() >= 3) {
        cout << "YES\n";
        cout << 'R';
        for (int i = 1; i < n; i++) {
            cout << 'B';
        }
        cout << "\n";
        return;
    } else {
        cout << "YES\n";
        vector<int> v;
        for (auto x : hashMap) {
            v.push_back(x.first);
        }
        int num1 = v[0];
        int num2 = v[1];
        int freq1 = hashMap[num1];
        int freq2 = hashMap[num2];
        if (freq1 >= freq2) {
            cout << 'B';
            for (int i = 0; i < n - 1; i++) {
                cout << 'R';
            }
            cout << "\n";
            return;
        } else if (freq1 < freq2) {
            for (int i = 0; i < freq1 + 1; i++) {
                cout << 'B';
            }
            for (int i = 0; i < n - freq1 - 1; i++) {
                cout << 'R';
            }
            cout << "\n";
            return;
        }
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
