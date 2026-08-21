#include <iostream>
using namespace std;

int power(int b, int n) {
    int result = 1;
    while (n--) {
        result *= b;
    }
    return result;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << power(a, b) + power(b, a) << "\n";
    return 0;
}
