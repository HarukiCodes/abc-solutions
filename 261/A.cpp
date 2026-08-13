#include <iostream>
using namespace std;

int main() {
    int L[2], R[2];
    for (int i = 0; i < 2; i++) {
        cin >> L[i] >> R[i];
    }
    int ans = 0;
    for (int i = 0; i <= 100; i++) {
        int paintCount = 0;
        for (int j = 0; j < 2; j++) {
            if (i >= L[j] && i <= R[j]) {
                paintCount++;
            }
        }
        if (paintCount == 2) {
            ans++;
        }
    }
    cout << max(0, ans - 1) << endl;
    return 0;
}