#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    int s_length = S.length();
    string max_str = S, min_str = S;
    S += S;
    for (int i = 0; i < s_length; i++) {
        string T(S.data() + i, S.data() + i + s_length);
        if (T > max_str) {
            max_str = T;
        }
        if (T < min_str) {
            min_str = T;
        }
    }
    cout << min_str << '\n' << max_str << endl;
    return 0;
}
