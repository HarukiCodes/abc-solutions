#include <bits/stdc++.h>
using namespace std;

// 方針:最終的に集まるお金のことだけを考える

int main() {
    int n, k;
    cin >> n >> k;
    vector<pair<long long, long>> ab(n);
    for (int i = 0; i < n; i++) {
        cin >> ab[i].first >> ab[i].second;
    }
    sort(ab.begin(), ab.end());
    // B[i]<=10^9,N<=10^5 ->goal=10^14
    long long now = k;
    for (int i = 0; i < n; i++) {
        if (ab[i].first <= now) {
            now += ab[i].second;
        }
    }
    cout << now << endl;
    return 0;
}
