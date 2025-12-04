#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    bool ok = false;
    for (int i = 1; i <= t.size(); i++) {
        if (s == t.substr(0, i)) {
            ok = true;
        }
    }
    cout << (ok ? "Yes" : "No") << endl;
    return 0;
}
