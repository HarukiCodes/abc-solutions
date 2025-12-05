#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int b[2], r[2], k, b_cnt = 0, r_cnt = 0;
    for (int i = 0; i < 8; i++) {
        if (s[i] == 'B') {
            b[b_cnt++] = i;
        } else if (s[i] == 'R') {
            r[r_cnt++] = i;
        } else if (s[i] == 'K') {
            k = i;
        }
    }
    cout << ((b[0] + b[1]) % 2 && r[0] < k && k < r[1] ? "Yes" : "No") << endl;
    return 0;
}
