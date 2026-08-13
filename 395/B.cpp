#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<vector<char>> grid(N + 1, vector<char>(N + 1));
    for (int i = 1; i <= N; ++i)
    {
        int j = N + 1 - i;
        if (i <= j)
        {
            char color;
            if (i % 2 == 1)
            {
                // black
                color = '#';
            }
            else
            {
                // white
                color = '.';
            }
            for (int y = i; y <= j; ++y)
            {
                for (int x = i; x <= j; ++x)
                {
                    grid[y][x] = color;
                }
            }
        }
    }
    for (int i = 1; i <= N; ++i)
    {
        for (int j = 1; j <= N; ++j)
        {
            cout << grid[i][j];
        }
        cout << endl;
    }
    return 0;
}
