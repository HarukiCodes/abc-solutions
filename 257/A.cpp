#include <iostream>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    char ans = (X / N) + (X % N > 0 ? 1 : 0) + ('A' - 1);
    cout << ans << endl;
    return 0;
}