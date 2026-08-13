#include <iostream>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int ans = 0;
    int s_idx = 0, t_idx = 0;
    while (s_idx < s.size() || t_idx < t.size()) {
        int a_in_t = 0;
        for (; t_idx < t.size() && t[t_idx] == 'A'; t_idx++) {
            a_in_t++;
        }

        int a_in_s = 0;
        for (; s_idx < s.size() && s[s_idx] == 'A'; s_idx++) {
            a_in_s++;
        }

        // 一致するなら走査が同時に終わる
        if (s_idx == s.size() && t_idx != t.size() ||
            t_idx == t.size() && s_idx != s.size()) {
            cout << -1 << endl;
            return 0;
        }

        // out of range 回避
        if (s[s_idx] != t[t_idx]) {
            cout << -1 << endl;
            return 0;
        }

        ans += abs(a_in_t - a_in_s);
        t_idx++;
        s_idx++;
    }
    cout << ans << endl;
    return 0;
}