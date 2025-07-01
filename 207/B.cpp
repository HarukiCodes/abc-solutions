// ABC207 B.cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    // A + Bx <= Cx * D
    // A <= (C * D - B)x
    int diff = (C * D - B);
    int ans = -1;
    if (diff > 0)
    {
        ans = (A + diff - 1) / diff;
    }
    cout << ans << endl;
    return 0;
}
