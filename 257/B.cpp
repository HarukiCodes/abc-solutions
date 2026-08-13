#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> b(n, 0), a(k), l(q);
    for (int& e : a) {
        cin >> e;
        e--;
        b[e]++;
    }
    for (int& e : l) {
        cin >> e;
        e--;
    }

    for (int i = 0; i < q; i++) {
        if (a[l[i]] != n - 1 && b[a[l[i]] + 1] == 0) {
            b[a[l[i]]]--;
            b[a[l[i]] + 1]++;
            a[l[i]]++;
        }
    }
    for (int i = 0; i < k; i++) {
        cout << a[i] + 1 << " ";
    }
    cout << endl;
    return 0;
}