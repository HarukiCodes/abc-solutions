// 方針: 人の組み合わせをindexにする

#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            a[i][j]--;
        }
    }
    vector<int> is_friends(n * n, false);
    for (int i = 0; i < m; i++) {
        const auto& picture = a[i];
        for (int j = 0; j < n - 1; j++) {
            int u = picture[j];
            int v = picture[j + 1];
            if (u > v) {
                swap(u, v);
            }
            is_friends[u * n + v] = true;
        }
    }
    // i<jとすることで、iとj、jとiを同一視する
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++)
            if (!is_friends[i * n + j]) {
                ans++;
            }
    }
    cout << ans << endl;
    return 0;
}