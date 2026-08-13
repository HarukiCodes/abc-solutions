#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> x(5 * n);
    for (int i = 0; i < 5 * n; i++) {
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    double ans = 0;
    for (int i = n; i < 4 * n; i++) {
        ans += x[i];
    }
    cout << fixed << setprecision(5);
    cout << ans / (3 * n) << endl;
    return 0;
}
