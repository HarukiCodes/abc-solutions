#include <iostream>
#include <vector>

int main() {
    int m;
    std::cin >> m;

    std::vector<int> ans{};
    int expornent = 0;
    while (m != 0) {
        // (m % 3) は (pow(expornent,3) が含まれる個数を表す
        for (int i = 0; i < (m % 3); i++) {
            ans.push_back(expornent);
        }
        m /= 3;
        expornent++;
    }

    std::cout << ans.size() << std::endl;
    for (size_t i = 0; i < ans.size(); i++) {
        std::cout << ans[i] << " ";
    }

    return 0;
}