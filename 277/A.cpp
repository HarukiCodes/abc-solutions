#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    vector<int> P(N);
    for (int i = 0; i < N; i++) {
        cin >> P[i];
    }
    for (int k = 0; k < N; k++) {
        if (P[k] == X) {
            cout << k + 1 << endl;
            break;
        }
    }
    return 0;
}