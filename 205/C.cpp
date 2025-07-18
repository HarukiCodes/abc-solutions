#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long A, B, C;
    cin >> A >> B >> C;
    if (C % 2) // A,Bの比較
    {
        if (A > B)
        {
            cout << ">" << endl;
        }
        else if (A < B)
        {
            cout << "<" << endl;
        }
        else
        {
            cout << "=" << endl;
        }
    }
    else // absの比較
    {
        if (abs(A) > abs(B))
        {
            cout << ">" << endl;
        }
        else if (abs(A) < abs(B))
        {
            cout << "<" << endl;
        }
        else
        {
            cout << "=" << endl;
        }
    }
    return 0;
}
