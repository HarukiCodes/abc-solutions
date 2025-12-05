#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), called(n, false), ans;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (!called[i]) {
            called[a[i] - 1] = true;
        }
    }
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (!called[i]) {
            k++;
            ans.push_back(i + 1);
        }
    }
    cout << k << endl;
    for (int i = 0; i < k; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
