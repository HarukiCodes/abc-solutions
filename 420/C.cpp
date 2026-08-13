#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<long long> A(N), B(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }
    long long current_sum = 0;
    for (int i = 0; i < N; i++) {
        current_sum += min(A[i], B[i]);
    }
    for (int i = 0; i < Q; i++) {
        char c;
        long long X, V;
        cin >> c >> X >> V;
        X--;  // 0-based
        current_sum -= min(A[X], B[X]);
        if (c == 'A') {
            A[X] = V;
        } else {
            B[X] = V;
        }
        current_sum += min(A[X], B[X]);
        cout << current_sum << endl;
    }
    return 0;
}
