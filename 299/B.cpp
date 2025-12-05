#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    vector<long long> c(n), r(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> r[i];
    }
    int ans = 0;
    if (count(c.begin(), c.end(), t)) {
        long long mx = 0;
        for (int i = 0; i < n; i++) {
            if (c[i] == t) {
                mx = max(mx, r[i]);
            }
        }
        for (int i = 0; i < n; i++) {
            if (c[i] == t && r[i] == mx) {
                ans = i + 1;
            }
        }
    } else {
        long long mx = 0;
        for (int i = 0; i < n; i++) {
            if (c[i] == c[0]) {
                mx = max(mx, r[i]);
            }
        }
        for (int i = 0; i < n; i++) {
            if (c[i] == c[0] && r[i] == mx) {
                ans = i + 1;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
