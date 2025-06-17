#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A;
    cin >> A;
    if (400 % A > 0)
    {
        cout << "-1\n";
    }
    else
    {
        cout << 400 / A << endl;
    }
    return 0;
}
