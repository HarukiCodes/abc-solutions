#include <iostream>

int main() {
    std::string s;
    std::cin >> s;

    for (char c : s) {
        if (c == '.') {
            continue;
        }
        std::cout << c;
    }

    return 0;
}