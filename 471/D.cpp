#include <algorithm>
#include <deque>
#include <iostream>
#include <vector>

long long v;

struct Battery {
    long long t;
    long long w;
    long long amountAt(long long t_q) {
        return std::clamp(t_q - t + w, 0LL, v);
    }
};

int main() {
    int q;
    std::cin >> q >> v;
    std::deque<std::vector<Battery>> batteries;
    std::vector<long long> ans;

    while (q--) {
        long long type, t_q;
        std::cin >> type >> t_q;

        if (type == 1) {
            long long w_q;
            std::cin >> w_q;
            Battery battery{t_q, w_q};

            if (batteries.empty()) {
                batteries.push_back({battery});
                continue;
            }

            long long min_w = batteries.front().front().amountAt(t_q);
            long long max_w = batteries.back().front().amountAt(t_q);
            if (w_q < min_w) {
                batteries.push_front({battery});
            } else if (w_q == min_w) {
                batteries.front().push_back(battery);
            } else if (w_q == max_w) {
                batteries.back().push_back(battery);
            } else {
                batteries.push_back({battery});
            }
        } else {
            if (batteries.empty()) {
                ans.push_back(-1);
                continue;
            }
            ans.push_back(batteries.back().front().amountAt(t_q));
            batteries.back().pop_back();
            if (batteries.back().empty()) {
            }
            batteries.pop_back();
        }
        for (int i = 0; i < batteries.size(); i++) {
            std::cout << t_q << ": ";
            for (int j = 0; j < batteries[i].size(); j++) {
                std::cout << batteries[i][j].amountAt(t_q) << " ";
            }
            std::cout << "\n";
        }
        std::cout << "\n\n";
    }

    // for (long long value : ans) {
    //     std::cout << value << std::endl;
    // }
    return 0;
}
