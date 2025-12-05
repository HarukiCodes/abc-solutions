#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    string s, t;
    cin >> n >> k >> s;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'o' && cnt < k) {
            t.push_back('o');
            cnt++;
        } else {
            t.push_back('x');
        }
    }
    cout << t << endl;
    return 0;
}
