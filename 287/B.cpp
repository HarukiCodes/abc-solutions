#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> s(n), t(m);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> t[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        bool match = false;
        string end3 = s[i].substr(3, 3);
        for (int j = 0; j < m; j++) {
            if (t[j] == end3) {
                match = true;
                break;
            }
        }
        if (match) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
