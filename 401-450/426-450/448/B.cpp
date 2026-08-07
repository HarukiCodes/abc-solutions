#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(n), c(m);
    for (int i = 0; i < m; i++) {
        cin >> c[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
        a[i]--;
    }
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        int used = min(c[a[i]], b[i]);
        ans += used;
        c[a[i]] -= used;
    }
    cout << ans << endl;
    return 0;
}
