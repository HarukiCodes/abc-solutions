// B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<vector<char>> A(N + 1, vector<char>(N + 1)), B(N + 1, vector<char>(N + 1));
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cin >> A[i][j];
        }
    }
    int I = 0, J = 0;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cin >> B[i][j];
            if (A[i][j] != B[i][j])
            {
                I = i, J = j;
            }
        }
    }
    cout << I << " " << J << endl;
    return 0;
}