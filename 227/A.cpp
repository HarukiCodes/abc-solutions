#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K, A;
    cin >> N >> K >> A;
    int ans = (A - 1 + K) % N;
    if (ans == 0) {
        ans = N;
    }
    cout << ans << endl;
    return 0;
}
