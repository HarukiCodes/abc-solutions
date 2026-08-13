#include <bits/stdc++.h>
using namespace std;

int main() {
    string version[3] = {"Ocelot", "Serval", "Lynx"};
    string x, y;
    cin >> x >> y;
    int indexX, indexY;
    for (int i = 0; i < 3; i++) {
        if (x == version[i]) {
            indexX = i;
        } else if (y == version[i]) {
            indexY = i;
        }
    }
    if (indexX >= indexY) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
