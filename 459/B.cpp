#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s[0] > 'v') {
            cout << 9;
        } else if (s[0] > 's') {
            cout << 8;
        } else if (s[0] > 'o') {
            cout << 7;
        } else {
            cout << (s[0] - 'a') / 3 + 2;
        }
    }
    cout << endl;
    return 0;
}
