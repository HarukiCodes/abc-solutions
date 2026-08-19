#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    int max_p = *max_element(p.begin() + 1, p.end());
    cout << max(0, (max_p - p[0]) + 1) << endl;
    return 0;
}
