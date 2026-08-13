#include <bits/stdc++.h>
using namespace std;

enum Block {
    EMPTY = '.',
    OBSTACLE = '#',
    START = 'S',
    GOAL = 'G',
    OPENED_DOOR = 'o',
    CLOSED_DOOR = 'x',
    SWITCH = '?'
};

int direction[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> grid(H, string(W, ' '));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> grid[i][j];
        }
    }
    int ans = 0;
    while (true) {
    }
    return 0;
}
