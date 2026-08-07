#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int cnt[26]{};
    for (char c : s) {
        cnt[c - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < cnt[i]; j++) {
            cout << char(i + 'a');
        }
    }
    cout << endl;
    return 0;
}