// B
#include <bits/stdc++.h>
using namespace std;

unsigned long long AnoAjo(int A)
{
    unsigned long long ruijo = 1;
    for (int i = 1; i <= A; i++)
    {
        ruijo *= A;
    }
    return ruijo;
}

int main()
{
    unsigned long long B;
    cin >> B;
    for (int i = 1; i <= 15; i++)
    {
        if (AnoAjo(i) == B)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}