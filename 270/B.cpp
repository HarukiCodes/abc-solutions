#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    // 壁と反対側 or 壁より手前 にゴール
    if (x * y < 0 || abs(x) < abs(y)) {
        cout << abs(x) << endl;
    }
    // 壁にぶつかる
    else {
        // 壁と反対側 or 壁より手前 にハンマー
        if (z * y < 0 || abs(z) < abs(y)) {
            cout << abs(z) + abs(x - z) << endl;
        }
        // ハンマーがない
        else {
            cout << "-1" << endl;
        }
    }
    return 0;
}
