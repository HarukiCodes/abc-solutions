#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<int>> matrix(H, vector<int>(W)), transpose(W, vector<int>(H));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> matrix[i][j];
            transpose[j][i] = matrix[i][j];
        }
    }
    for (int i = 0; i < W; i++) {
        for (int j = 0; j < H; j++) {
            if (j > 0) {
                cout << " ";
            }
            cout << transpose[i][j];
        }
        cout << endl;
    }
    return 0;
}
