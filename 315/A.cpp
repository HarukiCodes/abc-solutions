#include <iostream>
using namespace std;

int main() {
    const string T = "aiueo";
    string s;
    cin >> s;
    for (char c : s) {
        bool is_aiueo = false;
        for (size_t i = 0; i < T.size(); i++) {
            if (c == T[i]) {
                is_aiueo = true;
            }
        }
        if (!is_aiueo) {
            cout << c;
        }
    }
    return 0;
}
