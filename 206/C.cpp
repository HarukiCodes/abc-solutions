#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    long long ans = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; i++) {
            if (A[i] != A[j]) {
                ans++;
            }
        }
    }
    return 0;
}
