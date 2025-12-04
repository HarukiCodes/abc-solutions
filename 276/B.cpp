#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> cities(n + 1);
    int a, b;
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        cities[a].push_back(b);
        cities[b].push_back(a);
    }
    for (int i = 1; i <= n; i++) {
        sort(cities[i].begin(), cities[i].end());
        size_t d = cities[i].size();
        cout << d;
        for (int j = 0; j < d; j++) {
            cout << " " << cities[i][j];
        }
        cout << endl;
    }
    return 0;
}
