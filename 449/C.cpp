#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    int n, l, r;
    string s;
    cin >> n >> l >> r >> s;
    vector<unordered_map<char, int>> cnt(n + 1);
    for (int c = 'a'; c <= 'z'; c++) {
        cnt[0][c] = 0;
    }
    for (int i = 1; i <= n; i++) {
        cnt[i] = cnt[i - 1];
        cnt[i][s[i - 1]]++;
    }

    long long ans = 0;
    for (int i = 0; i < n; i++) {
        if (i + l >= n) {
            continue;
        }
        int min_r = min(i + r, n - 1);
        ans += (cnt[min_r + 1][s[i]] - cnt[i + l][s[i]]);
    }
    cout << ans << endl;
    return 0;
}
