#include <bits/stdc++.h>
using namespace std;

int main() {
    char grid[2][2];
    int black_count = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == '#') {
                black_count++;
            }
        }
    }
    if (black_count == 2 && grid[0][1] == grid[1][0]) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
    return 0;
}
