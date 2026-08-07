#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 1; i < n; i++) {
        cin >> p[i];
        p[i]--;
    }
    int parent = n - 1;
    int ans = 0;
    while (parent != 0) {
        parent = p[parent];
        ans++;
    }
    cout << ans << endl;
    return 0;
}
