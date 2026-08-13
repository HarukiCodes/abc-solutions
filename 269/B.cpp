#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> s(10);
    for (int i = 0; i < 10; i++) {
        cin >> s[i];
    }
    int a = -1, b = -1, c = -1, d = -1;
    for (int i = 0; i < 10; i++) {
        int cnt = count(s[i].begin(), s[i].end(), '#');
        if (cnt > 0) {
            if (a == -1) {
                a = i + 1;
                c = find(s[i].begin(), s[i].end(), '#') - s[i].begin() + 1;
                d = c + cnt - 1;
            } else {
                b = i + 1;
            }
        }
    }
    if (b == -1) {
        b = a;
    }
    cout << a << " " << b << endl;
    cout << c << " " << d << endl;
    return 0;
}
