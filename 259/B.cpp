#include <cmath>
#include <iomanip>
#include <iostream>
#include <numbers>
using namespace std;

int main() {
    double a, b, d;
    cin >> a >> b >> d;
    double c = cos(d / 180 * numbers::pi);
    double s = sin(d / 180 * numbers::pi);
    double x = a * c - b * s;
    double y = a * s + b * c;
    cout << fixed << setprecision(6);
    cout << x << " " << y << endl;
    return 0;
}