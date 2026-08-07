#include <bits/stdc++.h>
using namespace std;

int main() {
    string numStr;
    cin >> numStr;
    int number[4];
    for (int i = 0; i < 4; i++) {
        number[i] = numStr[i] - '0';
    }
    bool same = true;
    for (int i = 1; i < 4; i++) {
        if (number[i - 1] != number[i]) {
            same = false;
        }
    }
    if (same) {
        cout << "Weak" << endl;
        return 0;
    }
    bool weak = true;
    for (int i = 0; i < 3; i++) {
        if (number[i + 1] != ((number[i] + 1) % 10)) {
            weak = false;
        }
    }
    if (weak) {
        cout << "Weak" << endl;
    } else {
        cout << "Strong" << endl;
    }
    return 0;
}
