#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n)), b(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> b[i][j];
        }
    }
    bool ans;
    for (int i = 0; i < 4; i++) {
        ans = true;
        vector<vector<int>> tmp = a;
        // Rotate matrix A
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                a[j][k] = tmp[n - k - 1][j];
            }
        }
        // Judge
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (a[j][k] == 1 && b[j][k] != 1) {
                    ans = false;
                }
            }
        }
        if (ans) {
            break;
        }
    }
    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}
