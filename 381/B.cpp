#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;
    set<char> usedChar{};
    int length = static_cast<int>(S.size());
    // 条件1
    if (length % 2 == 1)
    {
        cout << "No\n";
        return 0;
    }
    for (int i = 0; i < length / 2; i++)
    {
        // 条件2
        if (S[2 * i] != S[2 * i + 1])
        {
            // 文字が一致しないなら
            cout << "No\n";
            return 0;
        }
        else // 条件3
        {
            if (usedChar.find(S[2 * i]) == usedChar.end())
            {
                // まだ使われていない文字なら
                usedChar.insert(S[2 * i]);
            }
            else
            {
                // 既に使われているなら
                cout << "No\n";
                return 0;
            }
        }
    }
    cout << "Yes\n";
    return 0;
}