#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> S(N), possible(N, false);
    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }
    for (int a = 1; a <= 1000; a++) {
        for (int b = 1; b <= 1000; b++) {
            int possible_s = 4 * a * b + 3 * a + 3 * b;
            for (int i = 0; i < N; i++) {
                if (S[i] == possible_s) {
                    possible[i] = true;
                }
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < N; i++) {
        if (!possible[i]) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
