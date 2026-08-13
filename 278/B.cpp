#include <bits/stdc++.h>
using namespace std;

bool isEasilyMisreadTime(int h, int m) {
    int b = h % 10;
    int a = (h - b) / 10;
    int d = m % 10;
    int c = (m - d) / 10;
    h = a * 10 + c, m = b * 10 + d;
    return (h >= 0 && h <= 23 && m >= 0 && m <= 59);
}

int main() {
    int h, m;
    cin >> h >> m;
    while (!isEasilyMisreadTime(h, m)) {
        if (m == 59) {
            m = 0;
            if (h == 23) {
                h = 0;
            } else {
                h++;
            }
        } else {
            m++;
        }
    }
    cout << h << " " << m << endl;
    return 0;
}
