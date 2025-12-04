#include <bits/stdc++.h>
using namespace std;

bool hasVertex(const vector<int>& v, int e) {
    return find(v.begin(), v.end(), e) != v.end();
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        g[u - 1].push_back(v - 1);
        g[v - 1].push_back(u - 1);
    }
    int ans = 0;
    for (int a = 0; a < n; a++) {
        for (int b = a + 1; b < n; b++) {
            for (int c = b + 1; c < n; c++) {
                if (hasVertex(g[a], b) && hasVertex(g[b], c) &&
                    hasVertex(g[c], a)) {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
