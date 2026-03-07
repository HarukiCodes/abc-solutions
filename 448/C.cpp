#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    map<int, int> cnt;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cnt[a[i]]++;
    }
    while (q--) {
        int k;
        cin >> k;
        vector<int> b(k);
        for (int i = 0; i < k; i++) {
            cin >> b[i];
            cnt[a[b[i] - 1]]--;
            if (cnt[a[b[i] - 1]] == 0) {
                cnt.erase(a[b[i] - 1]);
            }
        }
        cout << cnt.begin()->first << endl;
        for (int i = 0; i < k; i++) {
            cnt[a[b[i] - 1]]++;
        }
    }
    return 0;
}
