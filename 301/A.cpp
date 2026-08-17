#include <iostream>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int takahashi = 0, aoki = 0;
    for (char result : s) {
        if (result == 'T') {
            takahashi++;
        } else {
            aoki++;
        }
    }
    if (takahashi > aoki) {
        cout << "T\n";
    } else if (takahashi < aoki) {
        cout << "A\n";

    } else {
        // 最後に勝った方が負け
        cout << (s[n - 1] == 'T' ? 'A' : 'T') << "\n";
    }
    return 0;
}