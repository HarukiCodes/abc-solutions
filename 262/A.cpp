#include <iostream>
using namespace std;

int main() {
    int Y;
    cin >> Y;
    for (int i = 0; i < 4; i++) {
        if (Y % 4 == 2) {
            cout << Y << endl;
            return 0;
        }
        Y++;
    }
    return 0;
}