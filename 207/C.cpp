#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<double> l(n), r(n);
    for (int i = 0; i < n; i++) {
        int t;
        std::cin >> t >> l[i] >> r[i];

        // 閉区間に変換
        if (t == 2) {
            r[i] -= 0.5;
        } else if (t == 3) {
            l[i] += 0.5;
        } else if (t == 4) {
            r[i] -= 0.5;
            l[i] += 0.5;
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (std::max(l[i], l[j]) <= std::min(r[i], r[j])) {
                ans++;
            }
        }
    }
    std::cout << ans << "\n";
    return 0;
}