#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> divisor;
    for (int i = 1; i <= 9; i++) {
        if (n % i == 0) {
            divisor.push_back(i);
        }
    }
    string ans(n + 1, 'x');
    for (int i = 0; i <= n; i++) {
        for (int j : divisor) {
            if (i % (n / j) == 0) {
                ans[i] = char(j + '0');
                break;
            }
        }
        if (ans[i] == 'x') {
            ans[i] = '-';
        }
    }
    cout << ans << endl;
    return 0;
}
