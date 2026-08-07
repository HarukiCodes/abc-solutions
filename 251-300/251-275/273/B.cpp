#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x, k;
    cin >> x >> k;
    long long m = 10;
    for (int i = 0; i < k; i++) {
        long long rem = (x % m);
        // Add m to make the remainder positive
        if (rem < 0) {
            rem += m;
        }
        // Set 10^i digit to 0
        x -= rem;
        //Process the carry
        if (rem >= m / 2) {
            x += m;
        }
        m *= 10;
    }
    cout << x << endl;
    return 0;
}
