// A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, X, Y, Z;
    cin >> N >> X >> Y >> Z;
    int Max = max(X, Y), Min = min(X, Y);
    if (Min <= Z && Z <= Max)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
