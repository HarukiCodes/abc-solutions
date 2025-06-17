#include <iostream>
#include <cmath>
using namespace std;

bool isPointInCircle(int i, int j, int R, const double points[4][2])
{
    for (int idx = 0; idx < 4; idx++)
    {
        double distance = sqrt(pow(i + points[idx][0], 2) + pow(j + points[idx][1], 2));
        if (distance > R)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    double points[4][2] = {{0.5, 0.5}, {0.5, -0.5}, {-0.5, 0.5}, {-0.5, -0.5}};

    int R;
    cin >> R;
    int row = 1, column = R - 1;
    long long numQuarter = 0;
    while (true)
    {
        // 円の中心となる正方形がある行 or 列なら
        if (row == R || column == 0)
        {
            break;
        }
        if (isPointInCircle(column, row, R, points))
        {
            numQuarter += column;
            row++;
        }
        else
        {
            column--;
        }
    }
    cout << (R - 1) * 2 + 1 + (R - 1) * 2 + numQuarter * 4 << "\n";
    return 0;
}
