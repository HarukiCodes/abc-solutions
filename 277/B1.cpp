// 解説を参考にした
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    set<string> s_set{};
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        s_set.insert(s[i]);
    }
    const string first = "HDCS";
    const string second = "A23456789TJQK";
    bool ans = s_set.size() == n;
    for (int i = 0; i < n; i++) {
        if (count(first.begin(), first.end(), s[i][0]) == 0 ||
            count(second.begin(), second.end(), s[i][1]) == 0) {
            ans = false;
        }
    }
    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}
