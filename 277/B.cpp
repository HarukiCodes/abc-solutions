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
    bool yes = true;
    for (int i = 0; i < n; i++) {
        bool match[2]{};
        for (int j = 0; j < first.size(); j++) {
            if (s[i][0] == first[j]) {
                match[0] = true;
            }
        }
        for (int j = 0; j < second.size(); j++) {
            if (s[i][1] == second[j]) {
                match[1] = true;
            }
        }
        if (!match[0] || !match[1]) {
            yes = false;
        }
    }
    cout << (s_set.size() == n && yes ? "Yes" : "No") << endl;
    return 0;
}
