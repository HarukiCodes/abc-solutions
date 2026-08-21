#include <iostream>
using namespace std;

int toInt(char c) {
    return c - '0';
}

int main() {
    string x;
    cin >> x;
    bool yes = true;
    for (int i = 1; i < x.size(); i++) {
        int l = toInt(x[i - 1]);
        int r = toInt(x[i]);
        if (l <= r) {
            yes = false;
        }
    }
    cout << (yes ? "Yes\n" : "No\n");
    return 0;
}
