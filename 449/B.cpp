#include <iostream>
using namespace std;

int main() {
    int h, w, q;
    cin >> h >> w >> q;
    while (q--) {
        int type;
        cin >> type;
        if (type == 1) {
            int r;
            cin >> r;
            cout << r * w << endl;
            h -= r;
        } else {
            int c;
            cin >> c;
            cout << c * h << endl;
            w -= c;
        }
    }
    return 0;
}
