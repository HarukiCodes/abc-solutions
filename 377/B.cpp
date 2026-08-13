#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input
    string grid[8]{};
    for (int i = 0; i < 8; i++)
    {
        cin >> grid[i];
    }

    // solve
    set<int> column, row;
    for (int i = 0; i < 8; i++)
    {
        column.insert(i);
        row.insert(i);
    }
    for (int y = 0; y < 8; y++)
    {
        for (int x = 0; x < 8; x++)
        {
            if (grid[y][x] == '#')
            {
                column.erase(y);
                row.erase(x);
            }
        }
    }
    cout << column.size() * row.size() << '\n';
    return 0;
}