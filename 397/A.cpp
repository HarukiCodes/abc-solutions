#include <bits/stdc++.h>
using namespace std;

int main()
{
    float X;
    cin >> X;
    X *= 10;
    if (X >= 380)
    {
        cout << 1 << endl;
    }
    else if (X >= 375)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << 3 << endl;
    }
    return 0;
}
