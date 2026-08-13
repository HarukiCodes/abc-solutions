#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;
    for (int i = 0; i < Y; i++) {
        if (X + 1 > 12) {
            X = 1;
        } else {
            X++;
        }
    }
    cout << X << endl;
    return 0;
}
