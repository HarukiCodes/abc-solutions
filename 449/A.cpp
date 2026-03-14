#include <iomanip>
#include <iostream>
#include <numbers>
#include <vector>
using namespace std;

int main() {
    int D;
    cin >> D;
    cout << fixed << setprecision(6) << numbers::pi * D * D / 4.0 << endl;
    return 0;
}
