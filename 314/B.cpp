#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    vector<vector<int>> a(n);
    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        a[i].resize(c);
        for (int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }
    cin >> x;

    // xに賭けた人とその人が賭けた目の個数を集計
    vector<int> people;
    vector<int> bet_count;
    for (int i = 0; i < n; i++) {
        if (find(a[i].begin(), a[i].end(), x) != a[i].end()) {
            people.push_back(i);
            bet_count.push_back(a[i].size());
        }
    }
    // xに賭けた人がいなければ、0を出力
    if (people.size() == 0) {
        cout << 0 << endl;
        return 0;
    }
    // xに賭けた人の中で、賭けた目の個数の最小値を算出
    int min_count = *min_element(bet_count.begin(), bet_count.end());
    vector<int> ans;
    for (int i = 0; i < people.size(); i++) {
        if (bet_count[i] == min_count) {
            ans.push_back(people[i]);
        }
    }
    cout << ans.size() << endl;
    for (int num : ans) {
        cout << num + 1 << " ";
    }
    return 0;
}
