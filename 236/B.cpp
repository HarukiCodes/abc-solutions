#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> cardNum(N, 0);
    int loopCount = 4 * N - 1;
    for (int i = 0; i < loopCount; i++) {
        int card;
        cin >> card;
        cardNum[card - 1]++;
    }
    for (int i = 0; i < N; i++) {
        if (cardNum[i] == 3) {
            cout << i + 1 << endl;
            break;
        }
    }
    return 0;
}
