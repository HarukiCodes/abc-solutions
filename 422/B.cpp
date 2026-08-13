#include <bits/stdc++.h>
using namespace std;

int main() {
    int direction[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
    char white = '.', black = '#';
    int H, W;
    cin >> H >> W;
    vector<string> grid(H);
    for (int i = 0; i < H; i++) {
        cin >> grid[i];
    }
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == black) {
                int blackCount = 0;
                for (int k = 0; k < 4; k++) {
                    int di = direction[k][0], dj = direction[k][1];
                    if (i + di < 0 || i + di >= H || j + dj < 0 ||
                        j + dj >= W) {
                        continue;
                    }
                    if (grid[i + di][j + dj] == black) {
                        blackCount++;
                    }
                }
                if (blackCount == 0 || blackCount % 2 == 1) {
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}
