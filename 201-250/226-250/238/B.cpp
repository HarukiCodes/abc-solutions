#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n + 1);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++) {
        a[i] += a[i - 1];
        a[i] %= 360;
    }
    sort(a.begin(), a.end());
    a.push_back(360);
    int ans = a[0];
    for (int i = 0; i < n; i++) {
        ans = max(ans, a[i + 1] - a[i]);
    }
    cout << ans << endl;
}