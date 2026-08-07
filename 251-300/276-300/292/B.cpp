#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> num_cards(n, 0);
    for (int i = 0; i < q; i++) {
        int c, x;
        cin >> c >> x;
        if (c == 1) {
            num_cards[x - 1]++;
        } else if (c == 2) {
            num_cards[x - 1] += 2;
        } else {
            cout << (num_cards[x - 1] >= 2 ? "Yes" : "No") << endl;
        }
    }
    return 0;
}
