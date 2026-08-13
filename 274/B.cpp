#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> grid(h);
    for (int i = 0; i < h; i++) {
        cin >> grid[i];
    }
    vector<int> x(w, 0);
    for (int j = 0; j < w; j++) {
        for (int i = 0; i < h; i++) {
            if (grid[i][j] == '#') {
                x[j]++;
            }
        }
    }
    for (int i = 0; i < w; i++) {
        cout << x[i];
        if (i != w - 1) {
            cout << " ";
        } else {
            cout << endl;
        }
    }
    return 0;
}
