//分からん
#include <iostream>
#include <map>
using namespace std;

int N, T;
map<int, bool> bingo;
bool bingo_check()
{
    // 縦
    for (int i = 1; i <= N; i++)
    {
        int cnt = 0;
        for (int j = 0; j <= N - 1; j++)
        {
            if (bingo[N * (j - 1) + i])
            {
                cnt++;
            }
            else
            {
                break;
            }
        }
        if (cnt == N)
        {
            return true;
        }
    }
    // 横
    for (int i = 1; i <= N; i++)
    {
        int cnt = 0;
        for (int j = 1; j <= N; j++)
        {
            if (bingo[N * (i - 1) + j])
            {
                cnt++;
            }
            else
            {
                break;
            }
        }
        if (cnt == N)
        {
            return true;
        }
    }
    // 斜め
    int cnt = 0, rcnt = 0;
    for (int i = 1; i <= N; i++)
    {
        if (bingo[N * (i - 1) + i])
        {
            cnt++;
        }
        else
        {
            break;
        }
    }
    if (cnt == N)
    {
        return true;
    }
    for (int i = 1; i <= N; i++)
    {
        if (bingo[N * (i - 1) + N - i + 1])
        {
            rcnt++;
        }
        else
        {
            break;
        }
    }
    if (rcnt == N)
    {
        return true;
    }
    return false;
}
int main()
{
    cin >> N >> T;
    // ビンゴカードの初期化
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            bingo[N * (i - 1) + j] = false;
        }
    }

    for (int i = 1; i <= T; i++)
    {
        int A;
        cin >> A;
        bingo[A] = true;
        if (bingo_check())
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}