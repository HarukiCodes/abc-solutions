#include <iostream>
using namespace std;

int main() {
    int R, C, A[2][2];
    cin >> R >> C;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> A[i][j];
        }
    }
    cout << A[R - 1][C - 1] << endl;
    return 0;
}