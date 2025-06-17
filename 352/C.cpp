// C
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<long long> A(N + 1), B(N + 1);
    vector<pair<long long, int>> C(N + 1);
    for (int i = 1; i <= N; i++)
    {
        cin >> A[i] >> B[i];
        C[i].first = B[i] - A[i];
        C[i].second = i;
    }
    sort(++C.begin(), C.end());
    long long ans = 0;
    for (int i = 1; i < N; i++)
    {
        int idx = C[i].second;
        ans += A[idx];
    }
    ans += B[C[N].second];
    cout << ans << endl;

    return 0;
}
