#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<string> S(N);
    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }
    vector<int> scores(N, 0);
    for (int event = 0; event < M; event++) {
        int x = 0, y = 0;
        for (int i = 0; i < N; i++) {
            if (S[i][event] == '0') {
                x++;
            } else {
                y++;
            }
        }
        if (x == 0 || y == 0) {
            for (int i = 0; i < N; i++) {
                scores[i]++;
            }
            continue;
        }
        char victory;
        if (x < y) {
            victory = '0';
        } else {
            victory = '1';
        }
        for (int i = 0; i < N; i++) {
            if (S[i][event] == victory) {
                scores[i]++;
            }
        }
    }
    int max_score = *max_element(scores.begin(), scores.end());
    for (int i = 0; i < N; i++) {
        if (scores[i] == max_score) {
            cout << i + 1 << ' ';
        }
    }
    cout << endl;
    return 0;
}
