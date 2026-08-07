#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n), cnt(n + 1, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cnt[a[i]]++;
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        int bc = b[c[i] - 1];
        if (binary_search(a.begin(), a.end(), bc)) {
            ans += cnt[bc];
        }
    }
    cout << ans << endl;
    return 0;
}