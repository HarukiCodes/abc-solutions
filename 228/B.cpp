#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    vector<int> A(N), knowing(N, 0);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        A[i]--;  // 0-based
    }
    // 伝聞
    int ans = 0, listener = X - 1;
    while (true) {
        if (knowing[listener]) {
            break;
        }
        knowing[listener] = true;
        ans++;
        listener = A[listener];
    }
    cout << ans << endl;
    return 0;
}
