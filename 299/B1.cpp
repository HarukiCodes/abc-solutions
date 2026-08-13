#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long t;
    cin >> n >> t;
    vector<long long> c(n), r(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> r[i];
    }
    int t_winner = -1, c0_winner;
    long long t_max = 0, c0_max = 0;
    for (int i = 0; i < n; i++) {
        if (c[i] == t && r[i] > t_max) {
            t_max = r[i];
            t_winner = i + 1;
        }
        if (c[i] == c[0] && r[i] > c0_max) {
            c0_max = r[i];
            c0_winner = i + 1;
        }
    }
    cout << (t_winner != -1 ? t_winner : c0_winner) << endl;
    return 0;
}
