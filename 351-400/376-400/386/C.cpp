#include <bits/stdc++.h>
using namespace std;

int main() {
    int K;
    string S, T;
    cin >> K >> S >> T;
    bool isOk = false;
    int difLength = (int)(S.size() - T.size());

    if (difLength > 1 || difLength < -1)
    {
        // いずれの操作でも一致させることができない
        cout << "No\n";
        return 0;
    }
    else if (difLength == 0)
    {
        // 1文字を変更することで一致できる

        int numDifChar = 0;  // 違う文字の数
        for (int i = 0; i < S.size(); i++)
        {
            if (S[i] != T[i])
            {
                numDifChar++;
            }
        }
        // 違う文字が1個以下なら一致できる
        if (numDifChar <= 1)
        {
            cout << "Yes\n";
            return 0;
        }
        else
        {
            cout << "No\n";
            return 0;
        }
    }
    else  // difLength==1
    {
        // 1文字削除 or 1文字挿入

        // 文字が違う位置を探す
        int difPos = 0;
        for (int i = 0; i < min(S.size(), T.size()); i++)
        {
            if (S[i] != T[i])
            {
                difPos = i;
                break;
            }
        }
        // difPosより後の文字に違いがあるかを確認
        if (difLength == -1)  // S<T
        {
            for (int i = difPos + 1; i < S.size(); i++)
            {
                if (S[i] != T[i + 1])
                {
                    cout << "No\n";
                    return 0;
                }
            }
        }
        else  // S>T
        {
            for (int i = difPos + 1; i < T.size(); i++)
            {
                if (S[i + 1] != T[i])
                {
                    cout << "No\n";
                    return 0;
                }
            }
        }
        cout << "Yes\n";
    }
    return 0;
}
