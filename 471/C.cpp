#include <algorithm>
#include <iostream>
#include <iterator>
#include <limits>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    const long long MAX_LLONG_VALUE = std::numeric_limits<long long>::max();

    long long total_move_dist = 0;
    long long current_pos = 0;
    std::sort(a.begin(), a.end());
    const int first_index = std::distance(a.begin(), std::lower_bound(a.begin(), a.end(), 0));

    // 初期座標 0 をinsert
    a.insert(a.begin() + first_index, 0);
    int left_offset = 0, right_offset = 0;

    for (int i = 0; i < n; i++) {
        // aのindexを計算
        long long left_index = first_index - left_offset - 1;
        long long right_index = first_index + right_offset + 1;

        // Indexが範囲外であれば、選ばれないように最大値を入れておく
        long long dist_to_left, dist_to_right;
        dist_to_left = (left_index >= 0 ? current_pos - a[left_index] : MAX_LLONG_VALUE);
        dist_to_right = (right_index <= n ? a[right_index] - current_pos : MAX_LLONG_VALUE);

        // 最小値を求めて、移動
        long long delta = std::min(dist_to_left, dist_to_right);
        if (delta == dist_to_left) {
            left_offset++;
            current_pos -= delta;
        } else {
            right_offset++;
            current_pos += delta;
        }
        total_move_dist += delta;
    }

    std::cout << total_move_dist << "\n";
    return 0;
}
