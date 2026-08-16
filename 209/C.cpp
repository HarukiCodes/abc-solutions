#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    constexpr long long DIVISOR = 1e9 + 7;

    int n;
    std::cin >> n;
    std::vector<long long> c(n);
    for (int i = 0; i < n; i++) {
        std::cin >> c[i];
    }

    long long ans = 1;
    std::sort(c.begin(), c.end());
    for (int i = 0; i < n; i++) {
        // c[i]-1: i項目が取りうる値のパターン数
        ans = ans * std::max(0LL, c[i] - i) % DIVISOR;
    }
    std::cout << ans << "\n";
    return 0;
}