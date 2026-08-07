#include <iostream>
using namespace std;

int main() {
    int dices[3];
    for (int i = 0; i < 3; i++) {
        cin >> dices[i];
    }
    for (int i = 0; i < 3; i++) {
        if (dices[i] == dices[(i + 1) % 3]) {
            cout << dices[(i + 2) % 3] << endl;
            return 0;
        }
    }
    cout << 0 << endl;
}
