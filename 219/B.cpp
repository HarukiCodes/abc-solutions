#include <bits/stdc++.h>
using namespace std;

int main() {
    string S[3], T, ans;
    for (int i = 0; i < 3; i++) {
        cin >> S[i];
    }
    cin >> T;
    for (int i = 0; i < T.size(); i++) {
        ans += S[T[i] - '0' - 1];
    }
    cout << ans << endl;
    return 0;
}
