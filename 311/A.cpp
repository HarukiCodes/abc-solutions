#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int ans = 0;
    bool discovered[3]{};
    for (char c : s) {
        ans++;
        if (c == 'A' || c == 'B' || c == 'C') {
            discovered[c - 'A'] = true;
        }
        if (count(discovered, discovered + 3, true) == 3) {
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
