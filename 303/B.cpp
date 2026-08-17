#include <iostream>
#include <set>
#include <utility>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    set<pair<int, int>> friends;
    for (int i = 0; i < m; i++) {
        const auto& picture = a[i];
        for (int j = 0; j < n - 1; j++) {
            pair<int, int> p{picture[j], picture[j + 1]};
            if (picture[j] > picture[j + 1]) {
                swap(p.first, p.second);
            }
            friends.insert(p);
        }
    }
    cout << n * (n - 1) / 2 - friends.size() << endl;
    return 0;
}