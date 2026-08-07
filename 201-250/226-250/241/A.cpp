#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[10];
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }
    int k = 0, ans = 0;
    for (int i = 0; i < 3; i++) {
        ans = a[k];
        k = ans;
    }
    cout << ans << endl;
    return 0;
}
