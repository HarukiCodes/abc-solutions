#include <bits/stdc++.h>
using namespace std;

// 出力だけversion
int main() {
    int n;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n - 1; i++) {
        cout << s[i];
        if (s[i] == 'n' && s[i + 1] == 'a') {
            cout << 'y';
        }
    }
    cout << s.back() << endl;
    return 0;
}
