// B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> X(N + 1), Y(N + 1);
    for (int i = 1; i <= N; i++)
    {
        cin >> X[i] >> Y[i];
    }
    for (int i = 1; i <= N; i++)
    {
        vector<pair<double, int>> Z;
        for (int j = 1; j <= N; j++)
        {
            if (i == j)
            {
                continue;
            }
            int x = X[i] - X[j], y = Y[i] - Y[j];
            double dist = sqrt(x * x + y * y);
            // dist‚Í‘å‚«‚¢‡Aindex‚Í¬‚³‚¢‡
            Z.push_back(make_pair(dist, -j));
        }
        sort(Z.begin(), Z.end(), greater<pair<double, int>>());
        cout << -(*Z.begin()).second << endl;
    }
    return 0;
}