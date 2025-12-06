#include <bits/stdc++.h>
using namespace std;

int main() {
    // Input
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    // Count the frequency of each value in array
    vector<long long> cnt_a(n), cnt_bc(n);
    for (int i = 0; i < n; i++) {
        cnt_a[a[i] - 1]++;
        cnt_bc[b[c[i] - 1] - 1]++;
    }
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        ans += cnt_a[i] * cnt_bc[i];
    }
    cout << ans << endl;
    return 0;
}
