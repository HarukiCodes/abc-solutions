#include <iostream>
#include <unordered_map>
#include <vector>

int main() {
    int n, k;
    std::cin >> n >> k;
    std::vector<long long> c(n);
    for (int i = 0; i < n; i++) {
        std::cin >> c[i];
    }

    size_t ans = 0;
    std::unordered_map<long long, int> color_count;
    for (int i = 0; i < n; i++) {
        // 色の追加
        color_count[c[i]]++;

        // 前半に追加した色を削除
        if (i >= k) {
            color_count[c[i - k]]--;
            if (color_count[c[i - k]] == 0) {
                color_count.erase(c[i - k]);
            }
        }

        ans = std::max(ans, color_count.size());
    }
    std::cout << ans << "\n";
    return 0;
}
