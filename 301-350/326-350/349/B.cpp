// B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    // •¶š—ñ’†‚Ì•¶š‚ª‚»‚ê‚¼‚ê‰½‰ñoŒ»‚·‚é‚©
    map<char, int> cnt;
    for (int j = 0; j < S.size(); j++)
    {
        cnt[S[j]] = 0;
    }
    for (int j = 0; j < S.size(); j++)
    {
        cnt[S[j]]++;
    }
    int ans = 0;
    for (int i = 1; i <= 100; i++)
    {
        int kind = 0;
        for (const auto &[key, value] : cnt)
        {
            if (value == i)
            {
                kind++;
            }
        }
        if (kind == 0 || kind == 2)
        {
            ans++;
        }
    }
    cout << ((ans == 100) ? "Yes" : "No") << endl;
    return 0;
}