#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
/*
以下の判定をstd::includesで置き換えた
bool has_same_functions = true;
for (int k = 0; k < f[i].size(); k++) {
    if (find(f[j].begin(), f[j].end(), f[i][k]) == f[j].end()) {
        has_same_functions = false;
        break;
    }
}
if (!has_same_functions) {
    continue;
}
*/

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> p(n);
    vector<vector<int>> f(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        int c;
        cin >> c;
        f[i].resize(c);
        for (int j = 0; j < c; j++) {
            cin >> f[i][j];
        }
    }

    bool exists = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // 条件1
            if (p[i] < p[j]) {
                continue;
            }
            // 条件2
            if (!includes(f[j].begin(), f[j].end(), f[i].begin(), f[i].end())) {
                continue;
            }
            // 条件3
            if (p[i] > p[j] || f[j].size() > f[i].size()) {
                exists = true;
            }
        }
    }
    cout << (exists ? "Yes\n" : "No\n");
    return 0;
}
