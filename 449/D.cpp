#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int l, r, d, u;
    cin >> l >> r >> d >> u;
    int h = max(abs(d), abs(u));
    int w = max(abs(l), abs(r));
    vector<vector<int>> sum(h + 2, vector<int>(w + 2));
    for (int y = 0; y <= h; y++) {
        for (int x = 0; x <= w; x++) {
            if (max(abs(x), abs(y)) % 2 == 0) {
                if (x == 0 || y == 0) {
                    sum[y][x] = 1;
                }
                sum[y][x] = sum[y][x - 1] + 1;
            } else {
                if (x == 0 || y == 0) {
                    sum[y][x] = 0;
                }
                sum[y][x] = sum[y][x - 1];
            }
        }
    }
    for (int x = 0; x <= w; x++) {
        for (int y = 1; y <= h; y++) {
            sum[y][x] += sum[y - 1][x];
        }
    }
    for (int y = 0; y <= h; y++) {
        for (int x = 0; x <= w; x++) {
            cout << sum[y][x] << ' ';
        }
        cout << endl;
    }
    return 0;
}
