#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    long long ans = 1;
    for (int i = 0; i < A - B; i++) {
        ans *= 32LL;
    }
    cout << ans << endl;
    return 0;
}
