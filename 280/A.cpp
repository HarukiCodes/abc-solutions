#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> grid(h, string(w, ' '));
    for (string &row : grid) {
        cin >> row;
    }
    int ans = 0;
    for (string &row : grid) {
        ans += count(row.begin(), row.end(), '#');
    }
    cout << ans << endl;
    return 0;
}