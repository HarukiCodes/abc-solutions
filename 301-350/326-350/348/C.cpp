// C
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<pair<int, int>> X; // 入力用
    for (int i = 0; i < N; i++)
    {
        int A, C;
        cin >> A >> C;
        X.push_back(make_pair(C, A));
    }
    // ビーンズの色を大きい順に
    sort(X.begin(), X.end());
    vector<vector<int>> Z(N + 1);
    int now = 0;
    Z[now].push_back(X[0].second);
    for (int i = 1; i < N; i++)
    {
        // 次の色へ
        if (X[i - 1].first != X[i].first)
        {
            now++;
        }
        // now色のビーンズ配列
        Z[now].push_back(X[i].second);
    }
    int ans = 0;
    // 各色の最小値と比較
    for (int i = 0; i < Z.size(); i++)
    {
        if (Z[i].size() == 0)
        {
            continue;
        }
        int Min = Z[i][0];
        ans = max(ans, Min);
    }
    cout << ans << endl;
    return 0;
}