#include <bits/stdc++.h>
using namespace std;

int main() {
    int pin_row[11] = {3, 2, 4, 1, 3, 5, 0, 2, 4, 6};
    string s;
    cin >> s;
    const int num_row = 7;
    bool stand[7]{};
    for (int i = 0; i < 10; i++) {
        if (s[i] == '1') {
            stand[pin_row[i]] = true;
        }
    }
    bool split = false;
    for (int i = 0; i < num_row; i++) {
        for (int j = i + 2; j < num_row; j++) {
            if (stand[i] && stand[j] &&                        // condition1
                count(stand + i + 1, stand + j, false) > 0) {  // condition2
                split = true;
            }
        }
    }
    cout << (s[0] == '0' && split ? "Yes" : "No") << endl;
    return 0;
}
