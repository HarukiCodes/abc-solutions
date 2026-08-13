#include <iostream>
using namespace std;

int x[4] = {1, 0, -1, 0};
int y[4] = {0, 1, 0, -1};

int main() {
    int H, W, R, C;
    cin >> H >> W >> R >> C;
    int ans = 0;
    for (int i = 0; i < 4; i++) {
        int r = R + y[i], c = C + x[i];
        if (r == 0 || r == H + 1 || c == 0 || c == W + 1) {
            continue;
        }
        ans++;
    }
    cout << ans << endl;
    return 0;
}