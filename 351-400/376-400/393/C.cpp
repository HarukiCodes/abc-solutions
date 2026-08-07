#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<set<int>> gragh(N + 1);
    int ans = 0;
    for (int i = 0; i < M; i++)
    {
        int u, v;
        cin >> u >> v;
        if (u == v || gragh[u].find(v) != gragh[u].end() || gragh[v].find(u) != gragh[v].end())
        {
            ans++;
        }
        gragh[u].insert(v);
        gragh[v].insert(u);
    }
    cout << ans << "\n";
    return 0;
}
