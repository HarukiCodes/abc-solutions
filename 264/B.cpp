#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    r = min(r, 16 - r);
    c = min(c, 16 - c);
    if ((r % 2 == 0 && c >= r && c <= 16 - r) ||  // 行方向
        (c % 2 == 0 && r >= c && r <= 16 - c)) {  // 列方向
        cout << "white" << endl;
    } else {
        cout << "black" << endl;
    }
    return 0;
}
