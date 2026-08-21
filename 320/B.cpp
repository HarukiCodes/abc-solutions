#include <iostream>
using namespace std;

bool isPalindrome(const string& s) {
    const int n = s.size();
    const int middle = n / 2;
    for (int i = 0; i < middle; i++) {
        if (s[i] != s[n - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    string s;
    cin >> s;
    int ans = 0;
    const int N = s.size();
    for (int start = 0; start < N; start++) {
        for (int length = 1; start + length <= N; length++) {  // count
            if (isPalindrome(s.substr(start, length))) {
                ans = max(ans, length);
            }
        }
    }
    cout << ans << endl;
    return 0;
}
