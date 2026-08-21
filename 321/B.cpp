#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n - 1);
    int total = 0;
    for (int i = 0; i < n - 1; i++) {
        cin >> a[i];
        total += a[i];
    }
    int ans = -1;
    for (int i = 0; i <= 100; i++) {
        a.push_back(i);
        total += i;
        auto [min, max] = ranges::minmax_element(a);
        if (total - *min - *max >= x) {
            ans = i;
            break;
        }
        a.pop_back();
        total -= i;
    }
    cout << ans << endl;
    return 0;
}
