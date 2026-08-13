#include <iostream>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    int steps[4] = {1, -1, -1, 1};
    int x = 0, y = 0, direction = 0;
    for (char c : s) {
        if (c == 'S') {
            if (direction % 2) {
                y += steps[direction];
            } else {
                x += steps[direction];
            }
        } else {
            direction = (direction + 1) % 4;
        }
    }
    cout << x << ' ' << y << endl;
    return 0;
}