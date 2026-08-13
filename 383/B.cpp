#include <iostream>
#include <vector>
using namespace std;

int Manhattan(pair<int, int> p1, pair<int, int> p2)
{
    return abs(p1.first - p2.first) + abs(p1.second - p2.second);
}
int main()
{
    int H, W, D;
    cin >> H >> W >> D;
    vector<string> grid(H);
    for (string &e : grid)
    {
        cin >> e;
    }
    vector<pair<int, int>> pointFloor{};
    for (int i = 0; i < H * W; i++)
    {
        int y = i / W, x = i % W;
        if (grid[y][x] == '.')
        {
            pointFloor.push_back(pair<int, int>{y, x});
        }
    }
    int numFloor = (int)pointFloor.size();
    int ans = 0;
    for (int i = 0; i < numFloor; i++)
    {
        for (int j = i + 1; j < numFloor; j++)
        {
            int numHumidified = 0;
            for (int pixel = 0; pixel < H * W; pixel++)
            {
                pair<int, int> tmp{pixel / W, pixel % W};
                if (grid[tmp.first][tmp.second] == '.' && (Manhattan(tmp, pointFloor[i]) <= D || Manhattan(tmp, pointFloor[j]) <= D))
                {
                    numHumidified++;
                }
            }
            ans = max(ans, numHumidified);
        }
    }
    cout << ans << "\n";
    return 0;
}