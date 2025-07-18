#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> gragh;
bool Visited[2000];

void dfs(int v)
{
    if (Visited[v])
    {
        return;
    }
    Visited[v] = true;
    for (int next : gragh[v])
    {
        dfs(next);
    }
}

int main()
{
    int N, M;
    cin >> N >> M;
    gragh.resize(N);
    int A, B;
    for (int i = 0; i < M; i++)
    {
        cin >> A >> B;
        A--, B--;
        gragh[A].push_back(B);
    }
    int ans = 0;
    // 都市iをスタートとしてDFS
    for (int i = 0; i < N; i++)
    {
        fill(Visited, Visited + N, false);
        dfs(i);
        for (int index = 0; index < N; index++)
        {
            if (Visited[index])
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
