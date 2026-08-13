#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    // 単位ベクトルを求めればよい
    double a, b;
    cin >> a >> b;
    double norm = sqrt(a * a + b * b);
    cout << fixed << setprecision(6);
    cout << a / norm << ' ' << b / norm << endl;
    return 0;
}
