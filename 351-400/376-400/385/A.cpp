#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    bool enable = (A == B && B == C) || A + B == C || B + C == A || C + A == B;
    cout << (enable ? "Yes" : "No") << "\n";
    return 0;
}
