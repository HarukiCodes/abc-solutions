#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    bool plane[100][100]{};
    vector<int> a(n), b(n), c(n), d(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
        for (int y = c[i]; y < d[i]; y++) {
            for (int x = a[i]; x < b[i]; x++) {
                plane[y][x] = true;
            }
        }
    }
    int s = 0;
    for (int y = 0; y < 100; y++) {
        for (int x = 0; x < 100; x++) {
            if (plane[y][x]) {
                s++;
            }
        }
    }
    cout << s << endl;
    return 0;
}
