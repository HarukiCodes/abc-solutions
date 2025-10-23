#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    map<long long, int> cnt;
    for (int& i : a) {
        cin >> i;
        if (cnt.find(i) == cnt.end()) {
            cnt[i] = 1;
        } else {
            cnt[i]++;
        }
    }
    for (int& i : b) {
        cin >> i;
    }

    for (int i = 0; i < m; i++) {
        cnt[b[i]]--;
        if (cnt[b[i]] == -1) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}