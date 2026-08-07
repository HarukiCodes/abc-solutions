// C
#include <bits/stdc++.h>
using namespace std;
class vector2d
{
public:
    int x;
    int y;

    vector2d() : vector2d{0, 0} {}
    vector2d(int x, int y) : x(x), y(y) {}
    vector2d operator+(const vector2d &other)
    {
        int X = x + other.x;
        int Y = y + other.y;
        return vector2d{X, Y};
    }
};
int main()
{
    int H, W, N;
    cin >> H >> W >> N;
    vector<string> grid(H);
    string T;
    cin >> T;
    vector2d U{-1, 0};
    vector2d D{1, 0};
    vector2d L{0, -1};
    vector2d R{0, 1};
    for (string &s : grid)
    {
        cin >> s;
    }
    for (string &s : grid)
    {
        cout << s << endl;
    }
    int ans = 0;
    for (int h = 1; h < H - 1; h++)
    {
        for (int w = 1; w < W - 1; w++)
        {
            if (grid[h][w] == '.')
            {
                vector2d v{h, w};
                for (char t : T)
                {
                    if (t == 'L')
                    {
                        v = v + L;
                    }
                    else if (t == 'R')
                    {
                        v = v + R;
                    }
                    else if (t == 'U')
                    {
                        v = v + U;
                    }
                    else
                    {
                        v = v + D;
                    }
                    if (v.y > H - 1 || v.x > W - 1)
                        break;
                    if (grid[v.y][v.x] == '#')
                        break;
                }
                if (v.y > H - 1 || v.x > W - 1)
                    break;
                if (grid[v.y][v.x] != '#')
                    ans++;
            }
        }
    }
    cout << ans / 2 << endl;
    return 0;
}