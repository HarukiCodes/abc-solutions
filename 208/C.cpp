#include <iostream>
#include <map>
#include <vector>

int main() {
    int n;
    long long k;
    std::cin >> n >> k;
    std::vector<long long> a(n);
    std::map<long long, int> a_with_index;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        a_with_index[a[i]] = i;
    }

    long long fair_count = k / n;  // 均等に配られる飴の数
    long long k_prime = k % n;     // 均等に配った後に残る飴の数

    std::vector<long long> candy_counts(n);
    for (auto [a, index] : a_with_index) {
        candy_counts[index] = fair_count;
        if (k_prime > 0) {
            candy_counts[index]++;
            k_prime--;
        }
    }
    for (int i = 0; i < n; i++) {
        std::cout << candy_counts[i] << "\n";
    }
    return 0;
}