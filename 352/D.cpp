#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K, tmp = 0;
    cin >> N >> K;
    vector<pair<int, int>> P;
    for (int i = 1; i <= N; i++)
    {
        cin >> tmp;
        P.push_back(make_pair(tmp, i));
    }
    sort(P.begin(), P.end());
    int ans = INT_MAX;
    for (int i = 0; i < N - K; i++)
    {
        int dif = P[i + K].second - P[i].second;
        ans = min(ans, dif);
    }
    cout << ans << endl;
    return 0;
}