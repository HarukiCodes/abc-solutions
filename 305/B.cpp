#include <iostream>
using namespace std;

int main() {
    // 各点までの距離
    int coord[] = {0, 3, 1, 4, 1, 5, 9};

    // A点からの累積距離
    for (int i = 1; i < size(coord); i++) {
        coord[i] = coord[i] + coord[i - 1];
    }
    char p, q;
    cin >> p >> q;
    cout << abs(coord[p - 'A'] - coord[q - 'A']) << endl;
    return 0;
}