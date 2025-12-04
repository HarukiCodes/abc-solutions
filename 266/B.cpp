#include <bits/stdc++.h>
using namespace std;

/*
N-x%p=0 -> N≡x(mod p)
0<=x<p && x=pm+N%p -> m=0
x=N%p
*/

int main() {
    long long n;
    cin >> n;
    long long m = 998244353;
    n %= m;
    if (n < 0) {
        n += m;
    }
    cout << n << endl;
    return 0;
}
