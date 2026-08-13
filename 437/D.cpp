#include <bits/stdc++.h>
using namespace std;

int main() {
    const long long M = 998244353;

    int n, m;
    cin >> n >> m;
    vector<long long> a(n), b(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            long long mod = abs(a[i] - b[j]) % M;
            cout << "a[i] - b[j]:" << a[i] - b[j] << endl;
            cout << mod << endl;
            cout << (mod + M) % M << endl;
            ans += (mod - M) % M;
        }
    }
    cout << ans << endl;
    return 0;
}
