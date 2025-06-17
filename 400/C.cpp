#include <bits/stdc++.h>
using namespace std;

int main()
{
    uint64_t N;
    cin >> N;
    uint64_t ans = 0;
    for (uint64_t a = 1; a < 64; a++)
    {
        // 2^a
        uint64_t exponent = (1ull << a);
        // max of b^2
        double bToTwoPower = N / exponent;
        // max of b
        uint64_t maxB = pow(bToTwoPower, 0.5);
        // num of odd in b
        uint64_t numOdd = maxB+2 / 2 + maxB % 2;
        ans += numOdd;
    }
    cout << ans << endl;
    return 0;
}
