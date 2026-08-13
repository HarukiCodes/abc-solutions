#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<string> s(n), name(k);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        if (i < k) {
            name[i] = s[i];
        }
    }
    sort(name.begin(), name.end());
    for (int i = 0; i < k; i++) {
        cout << name[i] << endl;
    }
    return 0;
}
