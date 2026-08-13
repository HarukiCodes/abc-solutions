#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(k), x(n), y(n);
    for (int& e : a) {
        cin >> e;
        e--;  // 0-based
    }
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    vector<long long> dists(n, 10e10);
    for (int i = 0; i < k; i++) {
        dists[a[i]] = -1;
    }
    for (int i = 0; i < k; i++) {
        double lx = x[a[i]], ly = y[a[i]];
        for (int j = 0; j < n; j++) {
            if (j == a[i]) {
                continue;
            }
            long long dx = (lx - x[j]), dy = (ly - y[j]);
            long long dist = dx * dx + dy * dy;
            dists[j] = min(dists[j], dist);
        }
    }
    double ans = sqrt(*max_element(dists.begin(), dists.end()));
    cout << fixed << setprecision(5) << ans << endl;
    return 0;
}