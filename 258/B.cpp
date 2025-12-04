#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        for (int j = 0; j < n; j++) {
            a[i][j] = s[j] - '0';
        }
    }
    const int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1};
    const int dy[8] = {1, 1, 0, -1, -1, -1, 0, 1};
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Search in 8 directions
            int r = i, c = j;
            for (int k = 0; k < 8; k++) {
                int dr = dy[k], dc = dx[k];
                vector<int> nums = {a[r][c]};
                for (int i = 0; i < n - 1; i++) {
                    r = (r + dr + n) % n;
                    c = (c + dc + n) % n;
                    nums.push_back(a[r][c]);
                }
                // Update max
                string s{};
                for (int i = 0; i < nums.size(); i++) {
                    s += ('0' + nums[i]);
                }
                ans = max(ans, stoll(s));
            }
        }
    }
    cout << ans << endl;
    return 0;
}