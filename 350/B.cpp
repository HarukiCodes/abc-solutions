// B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, Q;
    cin >> N >> Q;
    vector<int> tooth(N + 1, 1);
    for (int i = 0; i < Q; i++)
    {
        int T;
        cin >> T;
        if (tooth[T] == 1)
        {
            tooth[T] = 0;
        }
        else
        {
            tooth[T] = 1;
        }
    }
    int ans = 0;
    for (int i = 1; i <= N; i++)
    {
        if (tooth[i] == 1)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}