#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> a(n, string(n, ' '));
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((a[i][j] == 'W' && a[j][i] != 'L') ||
                (a[i][j] == 'L' && a[j][i] != 'W') ||
                (a[i][j] == 'D' && a[j][i] != 'D')) {
                cout << "incorrect" << endl;
                return 0;
            }
        }
    }
    cout << "correct" << endl;
    return 0;
}
