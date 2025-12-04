#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    if (s.size() != 8) {
        cout << "No" << endl;
        return 0;
    }
    bool ans = true;
    for (int i = 0; i < 8; i++) {
        if (s[i] - '0' >= 0 && s[i] - '0' <= 9) {
            if (i == 0 || i == 7) {
                ans = false;
            }
            if (s[i] - '0' == 0 && i == 1) {
                ans = false;
            }
        } else {
            if (i >= 1 && i <= 6) {
                ans = false;
            }
        }
    }
    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}
