#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> t(N + 1), x(N + 1), y(N + 1);
    t[0] = 0, x[0] = 0, y[0] = 0;
    for (int i = 1; i <= N; i++) {
        cin >> t[i] >> x[i] >> y[i];
    }
    bool judge = true;
    for (int i = 1; i <= N; i++) {
        int dif_t = t[i] - t[i - 1];
        int dif_x = x[i] - x[i - 1];
        int dif_y = y[i] - y[i - 1];
        int sum = abs(dif_x + dif_y);
        // 移動量が移動時間より大きく && 移動量と移動時間の偶奇が不一致
        if ((sum > dif_t) || (dif_t % 2 != sum % 2)) {
            judge = false;
        }
    }
    if (judge) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}