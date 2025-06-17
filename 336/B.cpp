// B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long N;
    cin >> N;
    long long ans = 0;

    for (int i = 0; i < 32; i++)
    {
        if (N & (1 << i))
            break;
        else
            ans++;
    }
    cout << ans << endl;
    return 0;
}