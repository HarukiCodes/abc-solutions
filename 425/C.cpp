#include <bits/stdc++.h>
using namespace std;

void shift(vector<long long>& A) {
    int a0 = A[0];
    for (int i = 0; i < A.size() - 1; i++) {
        A[i] = A[i + 1];
    }
    A[A.size() - 1] = a0;
}

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<long long> A(N), sum(N + 1, 0);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int q = 0; q < N; q++) {
        cout << "A: ";
        for (int i = 0; i < N; i++) {
            cout << A[i] << " ";
        }
        cout << endl;
        sum.clear();
        for (int i = 0; i < N; i++) {
            sum[i + 1] = sum[i] + A[i];
        }
        cout << "Sum: ";
        for (int i = 0; i <= N; i++) {
            cout << sum[i] << ' ';
        }
        cout << endl;
        shift(A);
    }

    // while (Q--) {
    //     int type;
    //     cin >> type;
    //     if (type == 1) {
    //         int c;
    //         cin >> c;

    //     } else if (type == 2) {
    //     }
    // }
    return 0;
}
