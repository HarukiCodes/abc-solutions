#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    for (int i = 1; i < n; i++) {
        int l = 0;
        for (int k = 0; k < n - i; k++) {
            if (s[k] == s[k + i]) {
                break;
            } else {
                l++;
            }
        }
        cout << l << endl;
    }
    return 0;
}
