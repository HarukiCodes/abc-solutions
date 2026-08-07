// ABC205 A.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double A, B;
    cin >> A >> B;
    cout << fixed << setprecision(6) << B / 100 * A << endl;
    return 0;
}