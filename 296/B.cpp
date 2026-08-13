#include <bits/stdc++.h>
using namespace std;

int main() {
    const int n = 8;
    const string row = "87654321", col = "abcdefgh";
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (s[i][j] == '*') {
                cout << col[j] << row[i] << endl;
            }
        }
    }
    return 0;
}
