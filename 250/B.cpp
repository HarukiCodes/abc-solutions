#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    for (int i = 0; i < a * n; i++) {
        for (int j = 0; j < b * n; j++) {
            int tile_y = i / a, tile_x = j / b;
            if ((tile_x + tile_y) % 2) {
                cout << '#';
            } else {
                cout << '.';
            }
        }
        cout << endl;
    }
    return 0;
}