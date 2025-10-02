#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int ans = 0;
    for (int i = 0; i < 3; i++) {
        int mask = (1 << i);
        if (A & mask || B & mask) {
            ans += mask;
        }
    }
    cout << ans << endl;
    return 0;
}