#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double A, B;
    cin >> A >> B;
    cout << fixed << setprecision(3) << B / A << endl;
    return 0;
}