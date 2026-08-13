#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;
    int ans = (Y - X + 9) / 10;
    cout << (ans > 0 ? ans : 0) << endl;
    return 0;
}
