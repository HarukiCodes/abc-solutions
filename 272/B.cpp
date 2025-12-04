#include <bits/stdc++.h>
using namespace std;

bool hasCommon(const vector<int>& p, const vector<int>& q) {
    for (int i = 0; i < p.size(); i++) {
        for (int j = 0; j < q.size(); j++) {
            if (p[i] == q[j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> p(n);
    int k, x;
    for (int i = 0; i < m; i++) {
        cin >> k;
        for (int j = 0; j < k; j++) {
            cin >> x;
            p[x - 1].push_back(i);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (!hasCommon(p[i], p[j])) {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}
