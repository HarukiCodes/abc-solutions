// ABC201 C.cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int ans = 0;
    for (int i = 0; i < 10000; i++)
    {
        // 使用している数字を記録
        bool used_num[10]{};
        int X = i;
        for (int j = 0; j < 4; j++)
        {
            used_num[X % 10] = true;
            X /= 10;
        }
        // すべてのoを含み、xを含んでいないものを抽出
        bool exist = true;
        for (int j = 0; j < 10; j++)
        {
            if (S[j] == 'o' && !used_num[j])
            {
                exist = false;
            }
            else if (S[j] == 'x' && used_num[j])
            {
                exist = false;
            }
        }
        if (exist)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
