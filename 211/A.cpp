#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double A, B;
    cin >> A >> B;
    cout << fixed << setprecision(5) << (A - B) / 3.0 + B << endl;
    return 0;
}