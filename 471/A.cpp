#include <iostream>

int main() {
    double a, b;
    std::cin >> a >> b;
    if (a + b == 9 || a - b == 9 || a * b == 9 || a / b == 9) {
        std::cout << "Nine\n";
    } else {
        std::cout << "Nein\n";
    }
    return 0;
}
