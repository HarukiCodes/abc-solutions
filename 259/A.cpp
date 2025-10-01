#include <iostream>
using namespace std;

int main() {
    int N, M, X, T, D;
    cin >> N >> M >> X >> T >> D;
    int zeroAgeTall = T - X * D;
    if (M >= X) {
        cout << T << endl;
    } else {
        cout << zeroAgeTall + D * M << endl;
    }
    return 0;
}