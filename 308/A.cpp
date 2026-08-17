#include <iostream>
using namespace std;

int main() {
    int s[8];
    bool increasing = true;
    bool in_range = true;
    bool multiple_25 = true;
    for (int i = 0; i < size(s); i++) {
        cin >> s[i];
        if (i != 0 && s[i - 1] > s[i]) {
            increasing = false;
        }
        if (s[i] < 100 || s[i] > 675) {
            in_range = false;
        }
        if (s[i] % 25 != 0) {
            multiple_25 = false;
        }
    }
    cout << ((increasing && in_range && multiple_25) ? "Yes" : "No") << endl;
    return 0;
}