#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int H, W, X, Y;
    cin >> H >> W >> X >> Y;
    vector<string> grid(H + 1);
    for (int i = 1; i <= H; i++)
    {
        cin >> grid[i];
        grid[i] = ' ' + grid[i];
    }
    string T;
    cin >> T;
    int numHouse = 0;
    set<pair<int, int>> house;
    for (int i = 0; i < (int)T.size(); i++)
    {
        if (T[i] == 'U' && grid[X - 1][Y] != '#')
        {
            X--;
        }
        else if (T[i] == 'D' && grid[X + 1][Y] != '#')
        {
            X++;
        }
        else if (T[i] == 'L' && grid[X][Y - 1] != '#')
        {
            Y--;
        }
        else if (T[i] == 'R' && grid[X][Y + 1] != '#')
        {
            Y++;
        }
        // 未到達の家なら
        if (grid[X][Y] == '@' && house.find(make_pair(X, Y)) == house.end())
        {
            house.emplace(X, Y);
            numHouse++;
        }
    }
    cout << X << " " << Y << " " << numHouse << "\n";
    return 0;
}