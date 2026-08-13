#include <bits/stdc++.h>
using namespace std;

int main() {
    int S, T, X;
    cin >> S >> T >> X;
    int on[24] = {};
    if (S > T) {
        T += 24;
    }
    for (int i = S; i < T; i++) {
        on[i % 24] = true;
    }
    if (on[X]) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
