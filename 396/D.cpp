#include <bits/stdc++.h>
using namespace std;
int N, M;
bool visited[11]{};
using edge=pair<int, uint64_t>;
vector<vector<edge>> gragh(11);
uint64_t ans = UINT64_MAX;
vector<uint64_t> w;

uint64_t XOR(vector<uint64_t> v)
{
    int res = v[0];
    for (int i = 1; i < v.size(); ++i)
    {
        res ^= v[i];
    }
    return res;
}

void dfs(int pos)
{
    if (pos == N)
    {
        ans = min(ans, XOR(w));
        w.clear();
    }
    visited[pos] = true;
    for (int i = 0; i < gragh[pos].size(); ++i)
    {
        int next = gragh[pos][i].first;
        if (visited[next] == false)
        {
            w.push_back(gragh[pos][i].second);
            dfs(next);
        }
    }
}

int main()
{
    cin >> N >> M;
    for (int i = 0; i < M; ++i)
    {
        uint64_t u, v, w;
        cin >> u >> v >> w;
        gragh[u].emplace_back(v, w);
        gragh[v].emplace_back(u, w);
    }
    dfs(1);
    cout << ans << endl;
    return 0;
}