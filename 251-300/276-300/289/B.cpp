#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), g(n + 1, -1), read(n, false);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
        // レ点の関係
        g[a[i]] = a[i] + 1;
        g[a[i] + 1] = a[i];
    }
    while (true) {
        // 右端を決める
        int x = 1;
        for (int i = 0; i < n; i++) {
            if (read[i]) {
                x++;
            }
        }
        if (x == n + 1) {
            break;
        }
        // 左に返る
        vector<int> c{x};
        while (true) {
            if (g[x] > x) {
                x = g[x];
                c.push_back(x);
            } else {
                break;
            }
        }
        // 出力
        for (int i = c.size() - 1; i >= 0; i--) {
            cout << c[i] << " ";
            read[c[i] - 1] = true;
        }
    }
    cout << endl;
    return 0;
}
