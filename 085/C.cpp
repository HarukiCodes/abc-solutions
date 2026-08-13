#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Y;
    cin >> N >> Y;
    int satu[3] = {-1, -1, -1};
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j + i <= N; j++) {
            int shortage = Y - (10000 * i + 5000 * j);
            if (shortage / 1000 == N - (i + j)) {
                satu[0] = i;
                satu[1] = j;
                satu[2] = N - (i + j);
                break;
            }
        }
    }
    for (int e : satu) {
        cout << e << " ";
    }
    cout << endl;
    return 0;
}