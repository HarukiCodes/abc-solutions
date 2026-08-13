#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, T, U;
    cin >> S >> T;
    // 操作0回
    if (S == T) {
        cout << "Yes" << endl;
        return 0;
    }
    // 操作1回
    U = S;
    for (int i = 0; i < S.size() - 1; i++) {
        swap(U[i], U[i + 1]);
        if (U == T) {
            cout << "Yes" << endl;
            return 0;
        }
        U = S;
    }
    cout << "No" << endl;
    return 0;
}
