#include <bits/stdc++.h>
using namespace std;

// 文字列作成version
int main() {
    int n;
    string s, ans;
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        ans += s[i];
        if (i < n - 1 && s[i] == 'n' && s[i + 1] == 'a') {
            ans += 'y';
        }
    }
    cout << ans << endl;
    return 0;
}
