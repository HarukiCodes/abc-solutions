#include <bits/stdc++.h>
using namespace std;

void verticalShift(vector<string>& grid, int d) {
    vector<string> o = grid;
    int h = grid.size(), w = grid[0].size();
    for (int i = 0; i < h; i++) {
        grid[(i + d) % h] = o[i];
    }
}

void horizontalShift(vector<string>& grid, int d) {
    vector<string> o = grid;
    int h = grid.size(), w = grid[0].size();
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            grid[i][(j + d) % w] = o[i][j];
        }
    }
}

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> a(h, string(w, ' ')), b(h, string(w, ' ')),
        o(h, string(w, ' '));
    for (int i = 0; i < h; i++) {
        cin >> a[i];
        o[i] = a[i];
    }
    for (int i = 0; i < h; i++) {
        cin >> b[i];
    }
    bool ans = false;
    for (int s = 0; s < h; s++) {
        for (int t = 0; t < w; t++) {
            a = o;
            verticalShift(a, s);
            horizontalShift(a, t);
            if (a == b) {
                ans = true;
            }
        }
    }
    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}
