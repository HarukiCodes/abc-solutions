#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n;
    vector<int> a(n), ans;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> q;
    for (int i = 0; i < q; i++) {
        int type, k, x;
        cin >> type;
        if (type == 1) {
            cin >> k >> x;
            a[k - 1] = x;
        } else {
            cin >> k;
            cout << a[k - 1] << endl;
        }
    }
    return 0;
}
