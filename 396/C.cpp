#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int64_t> blacks(N), whites(M);
    int64_t tmp;
    for (int i = 0; i < N; ++i)
    {
        cin >> blacks[i];
    }
    for (int i = 0; i < M; ++i)
    {
        cin >> whites[i];
    }
    int64_t ans = 0;
    sort(blacks.begin(), blacks.end(), greater<int64_t>());
    sort(whites.begin(), whites.end(), greater<int64_t>());
    for (int i = 0; i < min(N, M); ++i)
    {
        int sum_black_and_white = blacks[i] + whites[i];
        if (sum_black_and_white < 0)
        {
            if (blacks[i] > 0)
            {
                ans += blacks[i];
            }
        }
        else
        {
            ans += sum_black_and_white;
            if (whites[i] < 0)
            {
                ans -= whites[i];
            }
        }
    }
    if (min(N, M) == M)
    {
        for (int i = M; i < N; ++i)
        {
            if (blacks[i] > 0)
            {
                ans += blacks[i];
            }
        }
    }
    cout << ans << endl;
    return 0;
}