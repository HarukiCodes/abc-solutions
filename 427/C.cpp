#include <bits/stdc++.h>
using namespace std;

vector<int> g[11], u, v;
int color[11];
bool visited[11];

void dfs(int pos, int clr) {
  if (visited[pos]) {
    return;
  }
  visited[pos] = true;
  color[pos] = (clr + 1) % 2;
  for (int next : g[pos]) {
    dfs(next, color[pos]);
  }
}

int main() {
  int n, m;
  cin >> n >> m;
  u.resize(m);
  v.resize(m);
  for (int i = 0; i < m; i++) {
    cin >> u[i] >> v[i];
    g[u[i]].push_back(v[i]);
    g[v[i]].push_back(u[i]);
  }
  int ans = m;
  for (int i = 1; i <= n; i++) {
    fill(visited, visited + n, false);
    dfs(i, 0);
    int cnt = 0;
    cout << i << ": ";
    for (int j = 0; j < m; j++) {
      if (color[u[j]] == color[v[j]]) {
        cout << j << ' ';
        cnt++;
      }
    }
    cout << cnt << endl;
    ans = min(ans, cnt);
  }
  cout << ans << endl;
  return 0;
}
