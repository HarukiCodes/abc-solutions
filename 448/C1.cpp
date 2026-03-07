#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a.begin(), a.end());
    // O(q*k^2)
    while (q--) {
        int k;
        cin >> k;
        vector<int> b(k);
        for (int i = 0; i < k; i++) {
            cin >> b[i];
        }
        // 最大k個除外されるだけだから、k+1回以内にfind()==b.end()になる
        for (int i = 0; i < k + 1; i++) {
            if (find(b.begin(), b.end(), a[i].second + 1) != b.end()) {
                continue;
            }
            cout << a[i].first << endl;
            break;
        }
    }
    return 0;
}
