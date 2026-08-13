#include <bits/stdc++.h>
using namespace std;

bool isEven(vector<int> &A) {
    int cnt = 0;
    for (int i = 0; i < A.size(); i++) {
        if (A[i] % 2 == 0) {
            cnt++;
        }
    }
    return (cnt == A.size());
}
void divide(vector<int> &A) {
    for (int i = 0; i < A.size(); i++) {
        A[i] /= 2;
    }
}
int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int ans = 0;
    while (isEven(A)) {
        ans++;
        divide(A);
    }
    cout << ans << endl;
    return 0;
}