#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    a--, b--;
    int row_a = a / 3, column_a = a % 3;
    int row_b = b / 3, column_b = b % 3;
    // 行が同じで、隣のセル
    if (row_a == row_b && column_b == column_a + 1) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
    return 0;
}