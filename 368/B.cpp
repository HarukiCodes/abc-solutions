#include <bits/stdc++.h>
using namespace std;

// B.cpp
int main()
{
    int N;
    cin >> N;
    vector<int> A(N + 1, 0);
    for (int i = 1; i <= N; i++)
    {
        cin >> A[i];
    }
    int ans = 0;
    while (true)
    {
        ans++;
        sort(A.begin() + 1, A.end(), greater<int>());
        A[1]--;
        A[2]--;
        int cnt = 0;
        for (int i = 1; i <= N; i++)
        {
            if (A[i] > 0)
            {
                cnt++;
            }
        }
        if (cnt <= 1)
        {
            break;
        }
    }
    cout << ans << "\n";
    return 0;
}