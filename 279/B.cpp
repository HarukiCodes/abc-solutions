#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    bool ans = false;
    if (t.size() > s.size()) {
        cout << "No" << endl;
        return 0;
    }
    for (int i = 0; i < s.size() - t.size() + 1; i++) {
        if (t == s.substr(i, t.size())) {
            ans = true;
        }
    }
    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}
