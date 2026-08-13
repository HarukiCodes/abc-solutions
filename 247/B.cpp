#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n), t(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i] >> t[i];
    }
    for (int i = 0; i < n; i++) {
        bool s_ok = true, t_ok = true;
        string a = s[i];
        for (int j = 0; j < n; j++) {
            if (i == j) {
                continue;
            }
            if (a == s[j] || a == t[j]) {
                s_ok = false;
            }
        }
        a = t[i];
        for (int j = 0; j < n; j++) {
            if (i == j) {
                continue;
            }
            if (a == s[j] || a == t[j]) {
                t_ok = false;
            }
        }
        // どちらも使えないなら
        if (!s_ok && !t_ok) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}