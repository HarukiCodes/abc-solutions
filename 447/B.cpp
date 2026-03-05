#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int cnt[26]{};
    for (int i = 0; i < s.size(); i++) {
        cnt[s[i] - 'a']++;
    }
    int max = *max_element(cnt, cnt + 26);
    for (int i = 0; i < s.size(); i++) {
        if (cnt[s[i] - 'a'] != max) {
            cout << s[i];
        }
    }
    cout << endl;
    return 0;
}