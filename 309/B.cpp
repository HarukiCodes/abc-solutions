#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    const auto a = b;
    for (int i = 0; i < n - 1; i++) {
        b[0][i + 1] = a[0][i];          // 上行
        b[n - 1][i] = a[n - 1][i + 1];  // 下行
        b[i][0] = a[i + 1][0];          // 左行
        b[i + 1][n - 1] = a[i][n - 1];  // 右行
    }

    for (int i = 0; i < n; i++) {
        cout << b[i] << endl;
    }
    return 0;
}
