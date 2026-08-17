#include <cstddef>
#include <iostream>
using namespace std;

int main() {
    size_t a;
    size_t ans = 0;
    for (int i = 0; i < 64; i++) {
        cin >> a;
        ans += (1LL << i) * a;
    }
    cout << ans << endl;
    return 0;
}