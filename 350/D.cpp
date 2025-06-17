// D
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    vector<vector<int>> G(N + 1);
    for (int i = 0; i < M; i++)
    {
        int A, B;
        cin >> A >> B;
        // Aより大きいユーザー
        G[A].push_back(B);
    }
    int ans = 0;
    for (int X = 1; X < G.size(); X++)
    {
        // user[i]の友達
        for (int j = 0; j < G[X].size(); j++)
        {
            int Y = G[X][j];
            // Yの友達集団ZにXがいなかったら
            for (int Z : G[Y])
            {
                if (Z != X)
                {
                    ans++;
                    int m = min(X, Y), M = max(X, Y);
                    G[m].push_back(M);
                }
            }
        }
    }
    for (int X = 1; X < G.size(); X++)
    {
        // user[i]の友達
        for (int j = 0; j < G[X].size(); j++)
        {
            int Y = G[X][j];
            // Yの友達集団ZにXがいなかったら
            for (int Z : G[Y])
            {
                if (Z != X)
                {
                    ans++;
                    int m = min(X, Y), M = max(X, Y);
                    G[m].push_back(M);
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}