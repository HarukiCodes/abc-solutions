#include <cctype>
#include <iostream>
#include <unordered_map>

std::string toUpper(const std::string& str) {
    std::string result{};
    for (char c : str) {
        result += std::toupper(c);
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::unordered_map<std::string, int> answers;

    while (n--) {
        std::string answer;
        std::cin >> answer;
        answers[toUpper(answer)]++;
    }
    int max_count = -1;
    for (auto [str, count] : answers) {
        max_count = std::max(max_count, count);
    }
    std::cout << max_count << "\n";
    return 0;
}
