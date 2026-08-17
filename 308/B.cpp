#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> c(n), d(m + 1);
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    for (int i = 1; i <= m; i++) {
        cin >> d[i];
    }
    vector<int> p(m + 1);
    for (int i = 0; i <= m; i++) {
        cin >> p[i];
    }
    int total = 0;
    for (int i = 0; i < n; i++) {
        bool other = true;
        for (int j = 1; j <= m; j++) {
            if (c[i] == d[j]) {
                total += p[j];
                other = false;
            }
        }
        if (other) {
            total += p[0];
        }
    }
    cout << total << endl;
    return 0;
}
