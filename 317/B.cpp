#include <algorithm>
#include <iostream>
#include <ranges>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& i : a) {
        cin >> i;
    }
    ranges::sort(a);
    for (int i : views::iota(1, n)) {
        if (a[i - 1] + 1 != a[i]) {
            cout << a[i - 1] + 1 << endl;
        }
    }
    return 0;
}