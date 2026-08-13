#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    string part = "oxx";
    bool ok = true;
    for (int i = 0; i < 3; i++) {
        ok = true;
        for (int j = 0; j < S.size(); j++) {
            if (S[j] != part[(i + j) % 3]) {
                ok = false;
                break;
            }
        }
        if (ok) {
            break;
        }
    }
    cout << (ok ? "Yes" : "No") << endl;
    return 0;
}
