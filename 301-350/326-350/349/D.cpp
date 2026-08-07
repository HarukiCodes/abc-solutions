// D
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long L, R;
    cin >> L >> R;
    long long cur = L;
    vector<long long> l, r;
    while (cur < R)
    {
        for (int i = 60; i >= 0; i--)
        {
            for (int j = i; j >= 0; j--)
            {
                if (cur == (1 << i) * j)
            }
        }
        
    }
    cout << l.size() << endl;
    for (long long i = 0; i < l.size(); i++)
    {
        cout << l[i] << " " << r[i] << endl;
    }
    return 0;
}