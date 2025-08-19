#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    set<char> char_set = {};
    for (const char ch : S) {
        char_set.insert(ch);
    }
    if (char_set.size() == 1) {
        cout << 1 << endl;
    } else if (char_set.size() == 2) {
        cout << 3 << endl;
    } else {
        cout << 6 << endl;
    }
    return 0;
}
