#include <iostream>
#include <vector>
using namespace std;

constexpr int SIZE = 9;
const string takcode[SIZE]{
    "###.?????",
    "###.?????",
    "###.?????",
    "....?????",
    "?????????",
    "?????....",
    "?????.###",
    "?????.###",
    "?????.###",
};

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> grid(n);
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }

    //(i+8<n) => (i<n-8)
    for (int i = 0; i < n - 8; i++) {
        for (int j = 0; j < m - 8; j++) {
            bool ok = true;
            for (int r = 0; r < SIZE; r++) {
                for (int c = 0; c < SIZE; c++) {
                    int row = i + r;
                    int column = j + c;
                    if (takcode[r][c] == '?') {
                        continue;
                    }
                    if (grid[row][column] != takcode[r][c]) {
                        ok = false;
                    }
                }
            }
            if (ok) {
                cout << i + 1 << " " << j + 1 << endl;
            }
        }
    }

    return 0;
}
