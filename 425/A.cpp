#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int ans = 0;
    for (int i = 1; i <= N; i++) {
        int d = (i % 2 == 0 ? 1 : -1);
        for (int j = 0; j < 3; j++) {
            d *= i;
        }
        ans += d;
    }
    cout << ans << endl;
    return 0;
}
