#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int ans = 0, count0 = 0;
    for (int i = 0; i < (int)S.size(); i++)
    {
        ans++;
        // 後ろ側に0が2連続なら
        if (i < S.size() - 1)
        {
            if (S[i] == '0' && S[i + 1] == '0')
            {
                i++; // 後ろ側の文字を飛ばす
            }
        }
    }
    cout << ans << "\n";
    return 0;
}
