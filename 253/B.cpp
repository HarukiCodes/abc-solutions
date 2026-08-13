#include <iostream>
#include <vector>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> grid(h, string(w, ' '));
    int x[2], y[2], cnt = 0;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'o') {
                y[cnt] = i, x[cnt] = j;
                cnt++;
            }
        }
    }
    cout << abs(x[1] - x[0]) + abs(y[1] - y[0]) << endl;
    return 0;
}