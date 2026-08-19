#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, p, q;
    cin >> n >> p >> q;
    vector<int> d(n);
    for (int i = 0; i < n; i++) {
        cin >> d[i];
    }
    cout << min(p, q + *min_element(d.begin(), d.end())) << endl;
    return 0;
}