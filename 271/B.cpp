#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> l(n), s(q), t(q);
    vector<vector<int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> l[i];
        a[i].resize(l[i]);
        for (int j = 0; j < l[i]; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < q; i++) {
        cin >> s[i] >> t[i];
    }
    for (int i = 0; i < q; i++) {
        cout << a[s[i] - 1][t[i] - 1] << endl;
    }
    return 0;
}
