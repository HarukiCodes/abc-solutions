#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;
    int shift = (S[0] - T[0] + 26) % 26;
    for (int i = 1; i < S.size(); i++) {
        if ((S[i] - T[i] + 26) % 26 != shift) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
