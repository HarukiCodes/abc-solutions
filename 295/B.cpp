#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    vector<string> b(r), ans;
    for (int i = 0; i < r; i++) {
        cin >> b[i];
    }
    ans = b;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            // if Bomb
            if (b[i][j] != '.' && b[i][j] != '#') {
                int h = b[i][j] - '0';
                // Vertical
                for (int dr = -h; dr <= h; dr++) {
                    // Horizontal
                    int w = h - abs(dr);
                    for (int dc = -w; dc <= w; dc++) {
                        int nr = i + dr;
                        int nc = j + dc;
                        // Out of range
                        if (nr < 0 || nr >= r || nc < 0 || nc >= c) {
                            continue;
                        } else {
                            ans[nr][nc] = '.';
                        }
                    }
                }
            }
        }
    }
    for (int i = 0; i < r; i++) {
        cout << ans[i] << endl;
    }
    return 0;
}
