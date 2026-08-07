#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N, M;
    cin >> N >> M;
    long long X = 0;
    for (int i = 0; i <= M; i++)
    {
        X += static_cast<long long>(pow(N, i));
        if (X > 1'000'000'000)
        {
            cout << "inf\n";
            return 0;
        }
    }
    cout << X << endl;
    return 0;
}
