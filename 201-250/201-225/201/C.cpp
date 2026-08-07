// ABC201 C.cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    int ans = 0;
    for (int i = 0; i < 10000; i++) {
        bool used[10]{};
        int x = i;
        for (int j = 0; j < 4; j++) {
            used[x % 10] = true;
            x /= 10;
        }
        bool ok = true;
        for (int j = 0; j < 10; j++) {
            if ((S[j] == 'o' && !used[j]) || (S[j] == 'x' && used[j])) {
                ok = false;
            }
        }
        if (ok) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
