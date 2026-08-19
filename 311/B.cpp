#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    int ans = 0, current = 0;
    for (int day = 0; day < d; day++) {
        bool ok = true;
        for (int i = 0; i < n; i++) {
            if (s[i][day] == 'x') {
                ok = false;
            }
        }
        if (ok) {
            current++;
        } else {
            current = 0;
        }
        ans = max(ans, current);
    }
    cout << ans << endl;
    return 0;
}
