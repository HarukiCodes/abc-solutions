#include <iostream>
using namespace std;

int main() {
    int n, m;
    string s, t;
    cin >> n >> m >> s >> t;

    int offset = m - n;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        // Prefix
        if (s[i] != t[i]) {
            ans |= 0b10;
        }
        // Suffix
        if (s[i] != t[offset + i]) {
            ans |= 0b01;
        }
    }
    cout << ans << endl;
    return 0;
}
