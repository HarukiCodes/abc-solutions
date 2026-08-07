#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int X, Y, N;
    cin >> X >> Y >> N;
    int yMaxApples = ceil(N / 3);
    int ans = X * N;  // yApple=0の料金で初期化
    for (int yApple = 1; yApple <= yMaxApples; yApple++) {
        int xApple = N - yApple * 3;
        ans = min(ans, X * xApple + Y * yApple);
    }
    cout << ans << endl;
    return 0;
}