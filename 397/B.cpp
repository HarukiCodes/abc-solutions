#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int ans = 0;
    for (int i = 1; i < S.size(); i++)
    {
        if (S[i] == S[i - 1])
        {
            ans++;
        }
    }
    if (S.front() == 'o')
    {
        ans++;
    }
    if (S.back() == 'i')
    {
        ans++;
    }
    cout << ans << endl;
    return 0;
}
