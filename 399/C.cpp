// #include <bits/stdc++.h>
// using namespace std;
// vector<vector<int>> gragh;
// vector<int> visited;
// vector<int> lengthList;
// int length = 0;

// bool Dfs(int pos)
// {
//     if (visited[pos])
//     {
//         return false;
//     }
//     else
//     {
//         visited[pos] = true;
//     }
//     for (int i = 0; i < gragh[pos].size(); i++)
//     {
//         int next = gragh[pos][i];
//         cout << "current: " << pos << ",next: " << next << endl;
//         if (Dfs(next))
//         {
//             length++;
//         }
//     }
//     cout << "push_back length" << endl;
//     lengthList.push_back(length);
//     return true;
// }

// int main()
// {
//     int N, M;
//     cin >> N >> M;
//     gragh.resize(N + 1);
//     visited.resize(N + 1);
//     std::memset(visited.data(), false, N + 1);
//     for (int i = 0; i < M; i++)
//     {
//         int u, v;
//         cin >> u >> v;
//         gragh[u].push_back(v);
//         gragh[v].push_back(u);
//     }
//     Dfs(1);

//     for (int i = 0; i < lengthList.size(); i++)
//     {
//         cout << lengthList[i] << endl;
//     }
//     return 0;
// }