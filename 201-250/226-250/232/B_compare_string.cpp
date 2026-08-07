#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < alphabet.size(); i++) {
        for (int j = 0; j < S.size(); j++) {
            S[j] = alphabet[(S[j] - 'a' + 1) % 26];
        }
        if (S == T) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
