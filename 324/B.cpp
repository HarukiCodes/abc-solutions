// B - 3-smooth Numbers
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N;
    cin >> N;
    for (int x = 0; x < 60; x++)
    {
        for (int y = 0; y < 60; y++)
        {
            long long product = pow(2, x) * pow(3, y);
            if (product == N)
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}