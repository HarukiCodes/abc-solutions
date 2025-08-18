#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;
    for (int k = 0; k < sizeof(N) * 8; k++) {
        if ((1LL << k) > N) {
            cout << k - 1 << endl;
            return 0;
        }
    }
    return 0;
}
