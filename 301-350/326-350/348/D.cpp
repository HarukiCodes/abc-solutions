// D
#include <bits/stdc++.h>
using namespace std;

int H, W, N, hp = 0;
bool visited[41000];
int kusuri[41000];
char A[41000];
vector<int> G[41000];
int place_num(int x, int y)
{
    return W * (y - 1) + x;
}
void add_Graph(int place, int x, int y)
{
    int Next = place_num(x, y);
    if (A[Next] != '#')
    {
        G[place].push_back(Next);
    }
}
void DFS(int pos)
{
    if (kusuri[pos] != 0)
    {
        hp = kusuri[pos];
    }
    visited[pos] = true;
    for (int i = 0; i < G[pos].size(); i++)
    {
        int next = G[pos][i];
        cout << pos << "->" << next << endl;
        if (visited[next] == false && hp > 0)
        {
            DFS(next);
        }
    }
    return;
}
int main()
{
    cin >> H >> W;
    int start = 0, goal = 0;
    for (int y = 1; y <= H; y++)
    {
        for (int x = 1; x <= W; x++)
        {
            int num = place_num(x, y);
            cin >> A[num];
            if (A[num] == 'S')
            {
                start = num;
            }
            if (A[num] == 'T')
            {
                goal = num;
            }
        }
    }
    cout << "start:" << start << " goal:" << goal << endl;
    // グラフの作成
    for (int y = 1; y <= H; y++)
    {
        for (int x = 1; x <= W; x++)
        {
            int pos = place_num(x, y);
            if (A[pos] == '#')
            {
                continue;
            }
            // 空きマスだったら
            add_Graph(pos, x, y - 1);
            add_Graph(pos, x + 1, y);
            add_Graph(pos, x, y + 1);
            add_Graph(pos, x - 1, y);
        }
    }
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        int x, y, e;
        cin >> x >> y >> e;
        kusuri[place_num(x, y)] = e;
    }
    DFS(start);
    for (int y = 1; y <= H; y++)
    {
        for (int x = 1; x <= W; x++)
        {
            int num = place_num(x, y);
            cout << visited[num] << " ";
        }
        cout << endl;
    }

    if (visited[goal])
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}