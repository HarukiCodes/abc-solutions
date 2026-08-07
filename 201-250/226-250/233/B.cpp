#include <bits/stdc++.h>
using namespace std;

int main() {
    int L, R;
    string S;
    cin >> L >> R >> S;
    L--, R--;
    for (int i = 0; i < (R - L + 1) / 2; i++) {
        swap(S[L + i], S[R - i]);
    }
    cout << S << endl;
    return 0;
}
