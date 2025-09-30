#include <iostream>
using namespace std;

int main() {
    string S, ans{};
    cin >> S;
    while (ans.size() < 6) {
        ans += S;
    }
    cout << ans << endl;
    return 0;
}