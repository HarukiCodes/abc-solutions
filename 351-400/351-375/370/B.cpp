#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<vector<int>> A(N + 1, vector<int>(N + 1, 0));
    for (int y = 1; y <= N; y++)
    {
        for (int x = 1; x <= y; x++)
        {
            cin >> A[y][x];
        }
    }
    int i = 1;
    for (int j = 1; j <= N; j++)
    {
        if (i >= j)
        {
            i = A[i][j];
        }
        else
        {
            i = A[j][i];
        }
    }
    cout << i << endl;
}