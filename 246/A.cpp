#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int x[3], y[3];
    for (int i = 0; i < 3; i++) {
        cin >> x[i] >> y[i];
    }
    // x_left,x_right,y_left,y_right
    // の数は2個ずつある
    // これらのうち、個数が1個であるとき、
    // それが残りの座標、つまり答え
    int ansX, ansY;
    for (int i = 0; i < 3; i++) {
        if (count(x, x + 3, x[i]) == 1) {
            ansX = x[i];
        }
        if (count(y, y + 3, y[i]) == 1) {
            ansY = y[i];
        }
    }
    cout << ansX << " " << ansY << endl;
    return 0;
}