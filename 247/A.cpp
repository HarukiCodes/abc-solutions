#include <iostream>
using namespace std;

int main() {
    string S, ans(4, '0');
    cin >> S;
    for (int i = 1; i < 4; i++) {
        if (S[i - 1] == '1') {
            ans[i] = '1';
        }
    }
    cout << ans << endl;
    return 0;
}