#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> a(h, string(w, ' ')), b(h, string(w, ' ')),
        o(h, string(w, ' '));
    for (int i = 0; i < h; i++) {
        cin >> a[i];
        o[i] = a[i];
    }
    for (int i = 0; i < h; i++) {
        cin >> b[i];
    }
    bool ans = false;
    for (int s = 0; s < h; s++) {
        a = o;
        // Vertical shift
        for (int i = 0; i < h; i++) {
            a[(i + s) % h] = o[i];
        }
        vector<string> shifted = a;
        for (int t = 0; t < w; t++) {
            a = shifted;
            // Horizontal shift
            for (int i = 0; i < h; i++) {
                for (int j = 0; j < w; j++) {
                    a[i][(j + t) % w] = shifted[i][j];
                }
            }
            if (a == b) {
                ans = true;
            }
        }
    }
    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}
