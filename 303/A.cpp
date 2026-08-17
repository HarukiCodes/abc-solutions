#include <iostream>
#include <utility>
using namespace std;

bool isSimilar(char a, char b) {
    if (a == b) {
        return true;
    }
    for (int i = 0; i < 2; i++) {
        if ((a == '1' && b == 'l') || (a == '0' && b == 'o')) {
            return true;
        }
        swap(a, b);
    }
    return false;
}

int main() {
    int n;
    string s, t;
    cin >> n >> s >> t;
    bool is_similar = true;
    for (int i = 0; i < n; i++) {
        if (!isSimilar(s[i], t[i])) {
            is_similar = false;
            break;
        }
    }
    cout << (is_similar ? "Yes" : "No") << endl;
    return 0;
}