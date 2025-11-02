#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int& i : a) {
        cin >> i;
    }
    for (int& i : b) {
        cin >> i;
    }
    int cnt[2]{};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // included in both A and B
            if (a[i] == b[j]) {
                if (i == j) {  // same position
                    cnt[0]++;
                } else {  // different position
                    cnt[1]++;
                }
            }
        }
    }
    cout << cnt[0] << endl;
    cout << cnt[1] << endl;
    return 0;
}