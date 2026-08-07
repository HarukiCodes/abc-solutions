#include <bits/stdc++.h>
using namespace std;

int main() {
    const long long m = 998244353;
    long long a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    a %= m, b %= m, c %= m;
    d %= m, e %= m, f %= m;
    long long abc = ((a * b) % m * c) % m;
    long long def = ((d * e) % m * f) % m;
    long long ans = (abc + m - def) % m;
    cout << ans << endl;
    return 0;
}
