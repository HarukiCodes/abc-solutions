#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < 10000; i++) {
        // Make PIN
        string num = to_string(i);
        num = string(4 - num.size(), '0') + num;
        // Get state
        bool contains[10]{};
        for (int j = 0; j < 4; j++) {
            contains[num[j] - '0'] = true;
        }
        // Judge
        bool can = true;
        for (int j = 0; j < 10; j++) {
            if ((s[j] == 'o' && !contains[j]) || (s[j] == 'x' && contains[j])) {
                can = false;
            }
        }
        if (can) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
