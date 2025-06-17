#include <bits/stdc++.h>
using namespace std;
int direction[8][2] = {{2, 1}, {1, 2}, {2, -1}, {1, -2}, {-2, 1}, {-1, 2}, {-2, -1}, {-1, -2}};

bool Contain(int y, int x, vector<vector<int>> placed)
{
    for (int k = 0; k < placed.size(); k++)
    {
        if (placed[k][0] == y && placed[k][1] == x)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    // input
    int N, M;
    cin >> N >> M;
    vector<vector<int>> placed(M, vector<int>(2, 0));
    for (int i = 0; i < M; i++)
    {
        cin >> placed[i][0] >> placed[i][1];
    }
    // solve
    long long ans = N;
    ans *= N;
    ans -= M;
    for (int i = 0; i < M; i++)
    {
        for (int d = 0; d < 8; d++)
        {
            int y = placed[i][0] + direction[d][0];
            int x = placed[i][1] + direction[d][1];
            if (y < 0 || y >= N || x < 0 || x >= N)
            {
                continue;
            }
            if (not Contain(y, x, placed))
            {
                placed.push_back({y, x});
                ans--;
            }
        }
    }
    // output
    cout << ans << '\n';
    return 0;
}