#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& e : a) {
        cin >> e;
    }

    int p = 0;
    vector<int> box(4, 0);
    for (int i = 0; i < n; i++) {
        box[0]++;
        vector<int> next_box(4, 0);
        for (int x = 0; x < 4; x++) {
            if (box[x]) {
                if (x + a[i] < 4) {
                    next_box[x + a[i]]++;
                } else {
                    p++;
                }
            }
        }
        box = next_box;
    }
    cout << p << endl;
    return 0;
}