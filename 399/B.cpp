#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> P(N);
    vector<int> rank(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> P[i];
    }
    int r = 1;
    while (r <= N)
    {
        int x = 0;
        for (int i = 0; i < N; i++)
        {
            if (rank[i] == 0)
            {
                x = max(x, P[i]);
            }
        }
        int k = 0;
        for (int i = 0; i < N; i++)
        {
            if (P[i] == x)
            {
                k++;
                rank[i] = r;
            }
        }
        r += k;
    }
    for (int i = 0; i < N; i++)
    {
        cout << rank[i] << endl;
    }
    return 0;
}
