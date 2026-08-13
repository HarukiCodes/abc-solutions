#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<vector<int>> colorIndex(N + 1);

    int A;
    for (int i = 1; i <= 2 * N; i++)
    {
        cin >> A;
        colorIndex[A].push_back(i);
    }

    int ans = 0;
    for (int i = 1; i <= N; i++)
    {
        if (colorIndex[i][1] - colorIndex[i][0] == 2)
        {
            ans++;
        }
    }

    cout<<ans<<endl;
    return 0;
}