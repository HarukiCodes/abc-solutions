#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    long long K;
    cin >> N >> K;
    vector<pair<long long, long long>> money(N);
    for (int i = 0; i < N; i++)
    {
        cin >> money[i].first >> money[i].second;
    }
    // 村を順番に訪れるために、村番号を昇順にする
    sort(money.begin(), money.end());
    long long village = 0;
    for (int i = 0; i < N; i++)
    {
        // 移動量を消費する
        K -= (money[i].first - village);
        // 村に移動
        village = money[i].first;
        // 移動結果お金が足りなくなっていたら
        if (K < 0)
        {
            break;
        }
        // お金追加
        K += money[i].second;
    }
    // A[N-1]番目の村から残金を使って移動する
    cout << village + K << endl;
    return 0;
}
