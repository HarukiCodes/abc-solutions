#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    long long t;
    cin >> n >> m >> t;
    vector<long long> a(n - 1), bonus(n - 1, 0);
    for (int i = 0; i < n - 1; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        bonus[x - 1] = y;
    }
    for (int i = 0; i < n - 1; i++) {
        t += bonus[i];
        t -= a[i];
        if (t <= 0) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
