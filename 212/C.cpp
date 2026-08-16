// 解説AC
#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<long long> a(n), b(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int x = 0, y = 0;
    long long ans = LLONG_MAX;
    while (x < n && y < m) {
        ans = min(ans, abs(a[x] - b[y]));
        if (a[x] > b[y]) {
            y++;
        } else {
            x++;
        }
    }
    cout << ans << endl;
    return 0;
}