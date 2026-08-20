#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main() {
    int n, h, x;
    cin >> n >> h >> x;
    vector<int> p(n);
    for (int& i : p) {
        cin >> i;
        i += h;
    }
    cout << ranges::distance(p.begin(), ranges::lower_bound(p, x)) + 1 << endl;
    return 0;
}
